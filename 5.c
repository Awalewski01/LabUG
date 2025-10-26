#include <stdio.h>   

int main() {         
    char znak;        
    int kod;          

    printf("Podaj znak lub kod: ");

    if (scanf("%d", &kod) == 1) { 
        if ((kod >= 65 && kod <= 90) || (kod >= 97 && kod <= 122)) {
            printf("Kod %d odpowiada literze alfabetu ('%c').\n", kod, kod);
        } else {
            printf("Kod %d nie odpowiada literze alfabetu.\n", kod);
        }
    } else {
        scanf(" %c", &znak);  // wczytujemy pojedynczy znak
        if ((znak >= 'A' && znak <= 'Z') || (znak >= 'a' && znak <= 'z')) {
            printf("'%c' jest litera alfabetu.\n", znak);
        } else {
            printf("'%c' nie jest litera alfabetu.\n", znak);
        }
    }

    return 0; 
}
