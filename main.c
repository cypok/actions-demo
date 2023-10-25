#include <stdio.h>
#include <math.h>

int main() {
    while (1) {
        int n;
        int count = scanf("%d", &n);
        if (count < 1) {
            break;
        }
        printf("%lf\n", pow(n, 2));
    }
    return 0;
}
