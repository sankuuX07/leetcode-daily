
#include <stdlib.h>
#include <string.h>

char* convert(char* s, int numRows) {
    int n = strlen(s);

    if (numRows == 1 || numRows >= n) {
        char* result = malloc(n + 1);
        if (!result) return NULL;
        strcpy(result, s);
        return result;
    }

    char* result = malloc(n + 1);
    if (!result) return NULL;

    int index = 0;
    int cycle = 2 * numRows - 2;

    for (int row = 0; row < numRows; row++) {
        for (int j = row; j < n; j += cycle) {
            result[index++]
                diagonal < n) {
                result[index++] = s[diagonal];
            }
        }
    }

    result[index] = '\0';
    return result;
}
