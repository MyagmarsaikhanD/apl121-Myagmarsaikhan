#include <stdio.h>
int main() {
    int n, m[10][10], symmetric = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (m[i][j] != m[j][i]) {
                symmetric = 0;
                break;
            }
        }
        if (symmetric == 0) break;
    }
    if (symmetric == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}