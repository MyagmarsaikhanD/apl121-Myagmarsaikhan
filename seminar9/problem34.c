#include <stdio.h>
int main() {
    int r, c, a[10][10];
    int max, row = 0, col = 0;
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    max = a[0][0];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
                row = i;
                col = j;
            }
        }
    }
    printf("%d %d %d\n", max, row, col);
    return 0;
}