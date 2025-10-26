#include <stdio.h>

int main() {
    int a, b, c;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);

    printf("Podaj druga liczbe: ");
    scanf("%d", &b);

    printf("Podaj trzecia liczbe: ");
    scanf("%d", &c);

  
if (a >= b && a >= c) {
        printf("Najwieksza liczba to: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("Najwieksza liczba to: %d\n", b);
    } else {
        printf("Najwieksza liczba to: %d\n", c);
    }
}
