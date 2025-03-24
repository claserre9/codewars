#include "iostream"
// https://www.codewars.com/kata/521c2db8ddc89b9b7a0000c1
using namespace std;

vector<int> snail(const vector<vector<int>> &snail_map) {
    vector<int> result;
    int n = snail_map.size();
    int m = snail_map[0].size();
    int row_start = 0, row_end = n - 1;
    int col_start = 0, col_end = m - 1;

    while (row_start <= row_end && col_start <= col_end) {
        for (int i = col_start; i <= col_end; i++) {
            result.push_back(snail_map[row_start][i]);
        }
        row_start++;

        for (int i = row_start; i <= row_end; i++) {
            result.push_back(snail_map[i][col_end]);
        }
        col_end--;

        if (row_start <= row_end) {
            for (int i = col_end; i >= col_start; i--) {
                result.push_back(snail_map[row_end][i]);
            }
            row_end--;
        }

        if (col_start <= col_end) {
            for (int i = row_end; i >= row_start; i--) {
                result.push_back(snail_map[i][col_start]);
            }
            col_start++;
        }
    }

    return result;
}

vector<vector<int>> v = {{1,  2,  3,  4},
                         {12, 14, 13, 5},
                         {11, 16, 15, 6},
                         {10, 9,  8,  7}};

int main() {
    vector<int> result = snail(v);
    for (auto r: result) {
        cout << r << endl;
    }
    return 0;
}