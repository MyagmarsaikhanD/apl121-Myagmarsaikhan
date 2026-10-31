#include <stdio.h>
int main() {
    int r, c, a[10][10], sum;
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        sum = 0;
        for (int j = 0; j < c; j++) {
            sum += a[i][j];
        }
        if (i > 0) printf(" ");
        printf("%d", sum);
    }
    printf("\n");
    for (int j = 0; j < c; j++) {
        sum = 0;
        for (int i = 0; i < r; i++) {
            sum += a[i][j];
        }
        if (j > 0) printf(" ");
        printf("%d", sum);
    }
    printf("\n");
    return 0;
}