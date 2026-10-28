
#include <stdlib.h>
#include <string.h>

char* convert(char* s, int numRows) {
    int n = (int)strlen(s);

    if (numRows == 1 || numRows >= n) {
        char* result = (char*)malloc((size_t)n + 1);
        if (result == NULL) return NULL;
        memcpy(result, s, (size_t)n + 1);
        return result;
    }

    char* result = (char*)malloc((size_t)n + 1);
    if (result == NULL) return NULL;

    int index = 0;
    int cycle = 2 * numRows - 2;

    for (int row = 0; row < numRows; row++) {
        for (int j = row; j < n; j += cycle) {
            result[index++] = s[j];

            int diagonal = j + cycle - 2 * row;

            if (row != 0 && row != numRows - 1 &&
                diagonal < n) {
                result[index++] = s[diagonal];
            }
        }
    }

    result[index] = '\0';
    return result;
}
