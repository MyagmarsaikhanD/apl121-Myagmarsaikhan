#include <stdio.h>
int main() {
    int N, composite[1001] = {0};
    scanf("%d", &N);
    for (int p = 2; p * p <= N; p++) {
        if (composite[p] == 0) {
            for (int j = p * p; j <= N; j += p) {
                composite[j] = 1;
            }
        }
    }
    int count = 0;
    for (int i = 2; i <= N; i++) {
        if (composite[i] == 0) {
            if (count > 0) printf(" ");
            printf("%d", i);
            count++;
        }
    }
    printf("\n");
    return 0;
}