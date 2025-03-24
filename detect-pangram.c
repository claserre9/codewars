#include <stdbool.h>
#include <string.h>
#include <ctype.h>

//https://www.codewars.com/kata/545cedaa9943f7fe7b000048/c
bool is_pangram(const char *str_in) {

    size_t str_length = strlen(str_in);

    int alphabet_count[26] = {0};

    for (size_t i = 0; i < str_length; ++i) {
        int lowerChar = tolower(str_in[i]);
        if (isalpha(lowerChar) && lowerChar >= 'a' && lowerChar <= 'z') {
            alphabet_count[lowerChar - 'a']++;
        }
    }
    for (int j = 0; j < 26; j++) {
        if (alphabet_count[j] == 0) {
            return false;
        }
    }
    return true;
}