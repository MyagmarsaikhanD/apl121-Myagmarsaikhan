#include <stdio.h>
int main() {
    int n, a[100];
    int min, index = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    min = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
            index = i;
        }
    }

    printf("%d %d\n", min, index);

    return 0;
}