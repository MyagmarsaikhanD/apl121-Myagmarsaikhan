#include <stdio.h>
int main() {
    int n, a[100], K, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &K);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == K) {
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}