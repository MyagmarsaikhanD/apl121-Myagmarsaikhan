#include <stdio.h>
int main() {
    int n, a[100], found, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        found = 0;
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            if (count > 0) printf(" ");
            printf("%d", a[i]);
            count++;
        }
    }
    printf("\n");
    return 0;
}