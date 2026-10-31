#include <stdio.h>
int main() {
    int n, a[100], count = 1, max = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            count++;
        } else {
            count = 1;
        }
        if (count > max) {
            max = count;
        }
    }
    printf("%d\n", max);
    return 0;
}