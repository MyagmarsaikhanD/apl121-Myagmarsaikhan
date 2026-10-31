#include <stdio.h>
int main() {
    int n, a[100], count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < n - 1; i++) {
        if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}