#include <stdio.h>
int main() {
    int n, a[100], p, x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d %d", &p, &x);
    for (int i = n; i > p; i--) {
        a[i] = a[i - 1];
    }
    a[p] = x;
    n++;
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}