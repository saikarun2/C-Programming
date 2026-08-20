#include <stdio.h>
int main() {
    int intervals[][2] = { {1, 3}, {2, 6}, {8, 10}, {9, 12} };
    int n = 4;
    int i, j;
    int tempStart, tempEnd;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (intervals[i][0] > intervals[j][0]) {
                tempStart = intervals[i][0];
                tempEnd = intervals[i][1];
                intervals[i][0] = intervals[j][0];
                intervals[i][1] = intervals[j][1];
                intervals[j][0] = tempStart;
                intervals[j][1] = tempEnd;
            }
        }
    }
    int start = intervals[0][0];
    int end = intervals[0][1];
    printf("Merged intervals:\n");
    for (i = 1; i < n; i++) {
        if (intervals[i][0] <= end) {
            if (intervals[i][1] > end) {
                end = intervals[i][1];
            }
        } else {
            printf("[%d, %d]\n", start, end);
            start = intervals[i][0];
            end = intervals[i][1];
        }
    }
    printf("[%d, %d]\n", start, end);
    return 0;
}