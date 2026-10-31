#include <stdio.h>
int main() {
    int n, a[100], minIndex = 0, maxIndex = 0, temp;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < n; i++) {
        if (a[i] < a[minIndex]) {
            minIndex = i;
        }
        if (a[i] > a[maxIndex]) {
            maxIndex = i;
        }
    }
    temp = a[minIndex];
    a[minIndex] = a[maxIndex];
    a[maxIndex] = temp;
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}