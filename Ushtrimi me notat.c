#include<stdio.h>

int main () {

    int p; char n;
    printf("Jep noten si numer: ");
    scanf("%d", &p);

    switch (p / 10){
    case 10:
    case 9:
        n = 'A';
        break;
    case 8:
        n = 'B';
        break;
    case 7:
        n = 'C';
        break;
    case 6:
        n = 'D';
        break;
    default:
        n = 'F';
        break;
    }
    printf("Nota me shkronje: %c.\n", n);
    return 0;
}
