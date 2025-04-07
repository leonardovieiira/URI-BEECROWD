#include <stdio.h>

int main() {
    int tempo, velociade;
    scanf("%d %d", &tempo, &velociade);
    int kml=12;
    float distancia= tempo *velociade;
    
    float litros= distancia/kml;
    printf("%.3f\n", litros);
    
    return 0;
}