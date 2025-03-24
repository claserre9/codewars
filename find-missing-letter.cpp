#include <vector>
#include <iostream>

//https://www.codewars.com/kata/5839edaa6754d6fec10000a2
using namespace std;

char findMissingLetter(const vector<char> &chars) {
    unsigned char first = chars.front();
    int current = int(first);
    for (char c: chars) {
        if (int(c) != current) {
            return char(current);
        }
        current++;
    }
    return 0;
}

int main() {
    char missing_letter = findMissingLetter({'O', 'Q', 'R', 'S'});

    cout << missing_letter << endl;
    return 0;
}
