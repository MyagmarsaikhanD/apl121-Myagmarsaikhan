#include <stdio.h>
int main() {
    int n, m[10][10], sum1 = 0, sum2 = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        sum1 += m[i][i];
        sum2 += m[i][n - 1 - i];
    }
    printf("%d %d\n", sum1, sum2);
    return 0;
}