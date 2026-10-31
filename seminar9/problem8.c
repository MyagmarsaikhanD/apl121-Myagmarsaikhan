#include <stdio.h>
int main() {
    int n, a[100];
    int pos = 0, neg = 0, zero = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            pos++;
        }
        else if (a[i] < 0) {
            neg++;
        }
        else {
            zero++;
        }
    }
    printf("%d %d %d\n", pos, neg, zero);
    return 0;
}