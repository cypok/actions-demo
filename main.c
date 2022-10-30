#include <stdio.h>

#include "aux.h"

int main() {
    while (1) {
        int n;
        int count = scanf("%d", &n);
        if (count < 1) {
            break;
        }
        printf("%d\n", calc(n));
    }
    return 0;
}
