#include <stdio.h>
int main() {
    int n, a[100], b[100];
    long long sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++) {
        sum += (long long)a[i] * b[i];
    }
    printf("%lld\n", sum);
    return 0;
}