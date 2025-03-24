//https://www.codewars.com/kata/57f609022f4d534f05000024
#include <stddef.h>

int stray(const size_t n, int arr[n]) {
    if (n == 0) return 0;
    if (n == 1) return arr[0];

    if (arr[0] != arr[1]) {
        if (arr[0] != arr[2]) {
            return arr[0];
        } else {
            return arr[1];
        }
    }

    for (size_t i = 2; i < n; i++) {
        if (arr[i] != arr[0]) {
            return arr[i];
        }
    }

    return 0;
}