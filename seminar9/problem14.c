#include <stdio.h>
int main() {
    int n, a[100], key;
    int index = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &key);
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == key) {
            index = i;
            break;
        }
    }
    printf("%d\n", index);
    return 0;
}