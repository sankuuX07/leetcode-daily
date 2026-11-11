
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

    int index
        }
    }

    result[index] = '\0';
    return result;
}
