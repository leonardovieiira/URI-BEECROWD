#include<stdio.h>

int main(){
char nome[50];
double sf, vendas, total;

    fgets(nome, sizeof(nome),stdin);
    scanf("%lf %lf", &sf, &vendas);
total= sf+ ((vendas * 15)/100);
printf("TOTAL = R$ %.2lf\n",total);


    return 0;
}