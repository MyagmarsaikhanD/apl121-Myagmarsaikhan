#include <stdio.h>
int main() {
    int n, a[100], sum, max;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = i; j < n; j++) {
            sum += a[j];
            if (sum > max) {
                max = sum;
            }
        }
    }
    printf("%d\n", max);
    return 0;
}