#include <stdio.h>

int main() {
 int dias, ano =365, mes =30;

 scanf("%d", &dias);

    int diasa= dias/ano;
    dias= dias % ano;
    int mesd =  dias /mes;
    int diasm= dias % mes;

    printf("%d ano(s)\n", diasa);
    printf("%d mes(es)\n", mesd);
    printf("%d dia(s)\n", diasm);

    return 0;
}