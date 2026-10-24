
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    int prefixLen = (int)strlen(strs[0]);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;

        while (j < prefixLen &&
               strs[i][j] != '\0' &&
               strs[i][j] == strs[0][j]) {
            j++;
        }

        prefixLen = j;

        if (prefixLen == 0) {
            break;
        }
    }

    char* result = (char*)malloc((prefixLen + 1) * sizeof(char));
    if (result == NULL) {
        return NULL;
    }

    memcpy(result, strs[0], prefixLen);
    result[prefixLen] = '\0';

    return result;
}
