#include <stdio.h>

int main() {
    int n, a[100];
    int sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        sum += a[i];
        a[i] = sum;
    }

    for (int i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", a[i]);
    }

    printf("\n");

    return 0;
}