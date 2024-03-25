#include <stdio.h>

int _hedh_topin(int *x1, int *x2, int *x3, int piket);

int main() {
    int n;
    printf("Numri i hedhjeve: ");
    scanf("%d", &n);

    int x1_ = 1, x2_ = 0, x3_ = 1;
    int piket = 0;

    for (int i = 1; i <= n; i++) {
        piket += _hedh_topin(&x1_, &x2_, &x3_, i);
    }

    printf("Piket totale pas %d hedhjesh: %d\n", n, piket);
    return 0;
}

int _hedh_topin(int *x1, int *x2, int *x3, int piket) {
    int d = *x1;

    *x1 = !*x1;
    if (piket % 2 == 0) {
        *x2 = !*x2;
    }
    *x3 = !*x3;

    if (d == 1) {
        return 1;
    } else {
        return 0;
    }
}
