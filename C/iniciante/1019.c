#include <stdio.h>

int main() {
    
int numero,tempoh, tempom,tempos;
scanf("%d", &numero);

tempoh= numero/3600;
numero = numero % 3600;
tempom= numero/60;
tempos= numero % 60;
printf("%d:%d:%d\n",tempoh,tempom,tempos);

    return 0;
}