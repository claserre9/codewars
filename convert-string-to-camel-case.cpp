#include <string>
#include <iostream>

using namespace std;

string to_camel_case(string text) {
    auto it = text.begin();
    while (it != text.end()) {
        if (*it == '_' || *it == '-') {
            it = text.erase(it);
            *it = toupper( *it);
        } else {
            ++it;
        }
    }

    return text;
}

int main() {
    cout << to_camel_case("the_stealth_warrior") << endl;
}