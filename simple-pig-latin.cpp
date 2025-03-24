#include "iostream"
#include <cctype>

//https://www.codewars.com/kata/520b9d2ad5c005041100000f/cpp
using namespace std;

vector<string> string_splitter(string str, char c= ' '){
    vector<string> result;
    string word;
    for (char ch: str) {
        if (ch == c) {
            result.push_back(word);
            word = "";
        } else {
            word += ch;
        }
    }
    result.push_back(word);
    return result;
}

string pig_one_it(string str)
{
    auto it = str.begin();
    int index = 0;
    string new_str;
    auto first = str.front();
    while (it != str.end()) {
        if(index != 0 ) {
            new_str += *it;
        }
        it++;
        index++;
    }

    new_str += first;
    new_str += "ay";

    return new_str;
}

bool is_punctuation(const std::string& str) {
    return std::all_of(str.begin(), str.end(), [](unsigned char c){return std::ispunct(c);});
}


string pig_it(string str) {
    vector<string> mylist = string_splitter(str);
    string new_str;
    for (const string& w : mylist) {
        if(is_punctuation(w)){
            new_str+=w + ' ';
        }else{
            new_str += pig_one_it(w) + ' ';
        }
    }

    if (!new_str.empty() && new_str[new_str.size() - 1] == ' ') {
        new_str.erase(new_str.size() - 1);
    }

    return new_str;
}

int main(){


}