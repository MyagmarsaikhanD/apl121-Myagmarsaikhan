#include <stdio.h>
int main() {
    int n, a[100];
    int count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            if (count > 0) {
                printf(" ");
            }
            printf("%d", a[i]);
            count++;
        }
    }
    if (count == 0) {
        printf("NONE");
    }
    printf("\n");
    return 0;
}