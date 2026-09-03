#include <stdio.h>
#include <string.h>
int main() {
    char text[1000], pattern[1000];
    int n, m, i, j, found = 0;
    const int d = 256;       
    const int q = 1000003;  
    long long h = 1;
    long long pHash = 0;
    long long tHash = 0;
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    printf("Enter pattern: ");
    fgets(pattern, sizeof(pattern), stdin);
    text[strcspn(text, "\n")] = '\0';
    pattern[strcspn(pattern, "\n")] = '\0';
    n = strlen(text);
    m = strlen(pattern);
    if (m == 0 || m > n) {
        printf("Pattern not found\n");
        return 0;
    }
    for (i = 0; i < m - 1; i++){
        h = (h * d) % q;
    }
    for (i = 0; i < m; i++) {
        pHash = (d * pHash + (unsigned char)pattern[i]) % q;
        tHash = (d * tHash + (unsigned char)text[i]) % q;
    }
    for (i = 0; i <= n - m; i++) {
        if (pHash == tHash) {
            for (j = 0; j < m; j++) {
                if (text[i + j] != pattern[j]){
                    break;
                }
            }
            if (j == m) {
                printf("Pattern found at index %d\n", i);
                found = 1;
            }
        }
        if (i < n - m) {
            tHash = (d * (tHash - (unsigned char)text[i] * h) + (unsigned char)text[i + m]) % q;
            if (tHash < 0){
                tHash += q;
            }
        }
    }
    if (!found){
        printf("Pattern not found\n");
    }
    return 0;
}
