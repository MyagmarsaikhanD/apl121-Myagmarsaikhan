#include <stdio.h>
int main() {
    int n, a[100];
    int max, second;
    int found = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] < max) {
            if (found == 0 || a[i] > second) {
                second = a[i];
                found = 1;
            }
        }
    }
    if (found == 1) {
        printf("%d\n", second);
    } else {
        printf("NONE\n");
    }
    return 0;
}