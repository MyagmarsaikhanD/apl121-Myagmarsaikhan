#include <stdio.h>
int main() {
    int n, a[100], b[100], c[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
    }
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%d", c[i]);
    }
    printf("\n");
    return 0;
}