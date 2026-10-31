#include <stdio.h>
int main() {
    int n, a[100];
    int sum = 0, count = 0;
    double avg;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    avg = (double)sum / n;
    for (int i = 0; i < n; i++) {
        if (a[i] > avg) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}