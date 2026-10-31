#include <stdio.h>

int main() {
    int n, a[100];
    int sorted = 1;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            sorted = 0;
            break;
        }
    }

    if (sorted == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
