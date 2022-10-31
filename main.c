#include <stdio.h>

int main() {
    while (1) {
        int n;
        int count = scanf("%d", &n);
        if (count < 1) {
            break;
        }
        printf("%d\n", n * n);
    }
    return 0;
}
