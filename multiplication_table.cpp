#include <vector>

using namespace std;

vector<vector<int>> multiplication_table(int n) {
    vector<vector<int>> result;
    for (int i = 1; i <= n; ++i) {
        vector<int> row;
        for (int j = 1; j <= n; ++j) {
            row.push_back(i*j);
        }
        result.push_back(row);
    }
    return result;
}

int main() {
    auto result = multiplication_table(3);
}