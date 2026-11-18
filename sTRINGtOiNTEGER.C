
#include <limits.h>

int myAtoi(char* s) {
    int i = 0;
    int sign = 1;
    long long result = 0;

    // 1. Skip leading spaces
    while (s[i] == ' ') {
        i++;
    }

    // 2. Check sign
    if (s[i] == '-') {
        sign = -1;
        i++;
    }
    else if (s[i] == '+') {
        i++;
    }

    // 3. Convert digits
    while (s[i] >= '0' && s[i] <= '9') {
        result = result * 10 + (s[i] - '0');

        // 4. Check overflow
        if (result > INT_MAX && sign == 1) {
            return INT_MAX;
        }

        if (result > (long long)INT_MAX + 1 && sign == -1) {
            return INT_MIN;
        }

        i++;
    }

    return (int)(result * sign);
}
