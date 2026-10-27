
#include <string.h>

int lengthOfLongestSubstring(char* s) {
    int lastSeen[256];

    for (int i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }

    int left = 0;
    int maxLength = 0;

    for (int right = 0; s[right] != '\0'; right++) {
        unsigned char c = (unsigned char)s[right];

        if (lastSeen[c] >= left) {
            left = lastSeen[c] + 1;
        }

        lastSeen[c] = right;

        int length = right - left + 1;
        if (length > maxLength) {
            maxLength = length;
        }
    }

    return maxLength;
}
