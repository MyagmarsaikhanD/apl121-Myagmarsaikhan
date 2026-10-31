#include <stdio.h>
int main() {
    int n, a[100], b[100], k;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    k = k % n;
    for (int i = 0; i < n; i++) {
        b[(i + k) % n] = a[i];
    }
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", b[i]);
    }
    printf("\n");
    return 0;
}