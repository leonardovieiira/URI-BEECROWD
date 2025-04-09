#include <stdio.h>

int main() {
    float valor;
    scanf("%f", &valor);

    // converter o valor para centavos
    int total = (int)(valor * 100 + 0.5);

    // notas e moedas em centavos
    int notas[] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[] = {100, 50, 25, 10, 5, 1};

    int quantnotas[6];
    int quantmoedas[6];

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        quantnotas[i] = total / notas[i];
        total = total % notas[i];
        printf("%d nota(s) de R$ %.2f\n", quantnotas[i], notas[i] / 100.0);
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        quantmoedas[i] = total / moedas[i];
        total = total % moedas[i];
        printf("%d moeda(s) de R$ %.2f\n", quantmoedas[i], moedas[i] / 100.0);
    }

    return 0;
}
