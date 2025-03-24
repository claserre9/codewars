#include <iostream>
#include <string>
#include <map>

//https://www.codewars.com/kata/53697be005f803751e0015aa

using namespace std;

map<string, int> vowel_to_decimal_mapping = {
        {"a", 1},
        {"e", 2},
        {"i", 3},
        {"o", 4},
        {"u", 5},
};

string encode(const string &str) {
    string new_encoded_string;

    for (char c: str) {
        string s(1, c);
        if (vowel_to_decimal_mapping.count(s) > 0) {
            new_encoded_string += to_string(vowel_to_decimal_mapping[s]);
        } else {
            new_encoded_string += s;
        }
    }
    return new_encoded_string;
}

string decode(const string &str) {
    string new_decoded_string;
    for (int i = 0; i < str.length(); i++) {
        if (isdigit(str[i])) {
            string vowel(1, ' ');
            for (auto & it : vowel_to_decimal_mapping) {
                if (it.second == (str[i] - '0')) {
                    vowel = it.first;
                    break;
                }
            }
            new_decoded_string += vowel;
        } else {
            new_decoded_string += str[i];
        }
    }
    return new_decoded_string;
}


int main() {

    cout << encode("hello") << endl;
    cout << decode("h2ll4") << endl;

    return 0;
}