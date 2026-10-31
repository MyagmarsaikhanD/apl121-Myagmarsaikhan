#include <stdio.h>

int main() {
    int n, a[100];
    int min, max;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    min = a[0];
    max = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }

    printf("%d\n", max - min);

    return 0;
}