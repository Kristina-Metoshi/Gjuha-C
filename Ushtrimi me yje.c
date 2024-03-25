#include <stdio.h>

int main() {

    int rreshti;
    printf("Shkruaj numrin e rreshtave: ");
    scanf("%d", &rreshti);

    for (int i = 0; i < rreshti; i++) {

        for (int j = 0; j < rreshti - i - 1; j++) {
            printf("_ ");
        }


        for (int m = 0; m < i + 1; m++) {
            printf("*");

            if (m < i) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
