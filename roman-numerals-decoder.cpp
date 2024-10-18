#include <iostream>
#include <string>
#include <map>

//https://www.codewars.com/kata/51b6249c4612257ac0000005/train/cpp

using namespace std;

int solution(const string &roman) {
    int sum = 0;
    int previousValue = 1000;
    int currentValue;

    map<char, int> roman_numbers_mapping = {
            {'M', 1000},
            {'D', 500},
            {'C', 100},
            {'L', 50},
            {'X', 10},
            {'V', 5},
            {'I', 1}
    };

    for (const auto &item: roman) {
        currentValue = roman_numbers_mapping[item];
        if (previousValue >= currentValue) sum += currentValue;
        else sum += currentValue - 2 * previousValue;
        previousValue = currentValue;
    }
    return sum;
}

int main() {
    cout << solution("IX") << endl;
    return 0;
}