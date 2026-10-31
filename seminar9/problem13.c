#include <stdio.h>
int main() {
    int n, a[100], key;
    int count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &key);
    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}