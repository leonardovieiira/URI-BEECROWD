#include <stdio.h>

int main() {
    int km; float litros;
scanf("%d  %f", &km, &litros);

float media= km/litros;
printf("%.3f km/l\n",media);
    return 0;
}