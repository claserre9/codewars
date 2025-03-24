//https://www.codewars.com/kata/55f8a9c06c018a0d6e000132
#include <stdbool.h>
#include <regex.h>
#include <stddef.h>

const char* FOUR_DIGIT_PIN_REGEX = "^[0-9]{4}$";
const char* SIX_DIGIT_PIN_REGEX = "^[0-9]{6}$";

bool validate_pin(const char *pin) {
    regex_t regex;
    if (regcomp(&regex, FOUR_DIGIT_PIN_REGEX, REG_EXTENDED) == 0) {
        if (regexec(&regex, pin, 0, NULL, 0) == 0) {
            regfree(&regex);
            return true;
        }
        regfree(&regex);
    }

    if (regcomp(&regex, SIX_DIGIT_PIN_REGEX, REG_EXTENDED) == 0) {
        if (regexec(&regex, pin, 0, NULL, 0) == 0) {
            regfree(&regex);
            return true;
        }
        regfree(&regex);
    }

    return false;
}