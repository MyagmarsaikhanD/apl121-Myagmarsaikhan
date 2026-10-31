#include <stdio.h>
int main() {
    int r, c, m[10][10];
    scanf("%d %d", &r, &c);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
            if (i > 0) printf(" ");
            printf("%d", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}