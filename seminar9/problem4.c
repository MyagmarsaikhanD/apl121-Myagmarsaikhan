#include <stdio.h>
int main() {
    int n, a[100];
    int sum = 0;
    double avg;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    avg = (double)sum / n;
    printf("%.2f\n", avg);
    return 0;
}