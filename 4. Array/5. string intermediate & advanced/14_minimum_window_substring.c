#include <stdio.h>
#include <string.h>
#include <limits.h>
int main() {
    char s[1000], t[1000];
    int need[256] = {0};
    int have[256] = {0};
    int n, m;
    int left = 0, right;
    int required = 0, formed = 0;
    int minLen = INT_MAX, minStart = 0;
    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);
    printf("Enter target string: ");
    fgets(t, sizeof(t), stdin);
    s[strcspn(s, "\n")] = '\0';
    t[strcspn(t, "\n")] = '\0';
    n = strlen(s);
    m = strlen(t);
    if (m == 0 || m > n) {
        printf("No minimum window substring exists.\n");
        return 0;
    }
    for (int i = 0; i < m; i++) {
        if (need[(unsigned char)t[i]] == 0){
            required++;
        }
        need[(unsigned char)t[i]]++;
    }
    for (right = 0; right < n; right++) {
        unsigned char c = s[right];
        have[c]++;
        if (need[c] > 0 && have[c] == need[c]){
            formed++;
        }
        while (formed == required) {
            if (right - left + 1 < minLen) {
                minLen = right - left + 1;
                minStart = left;
            }
            unsigned char lc = s[left];
            have[lc]--;
            if (need[lc] > 0 && have[lc] < need[lc]){
                formed--;
            }
            left++;
        }
    }
    if (minLen == INT_MAX) {
        printf("No minimum window substring found.\n");
    } else {
        printf("Minimum window substring: ");
        for (int i = minStart; i < minStart + minLen; i++){
            printf("%c", s[i]);
        }
        printf("\n");
    }
    return 0;
}
