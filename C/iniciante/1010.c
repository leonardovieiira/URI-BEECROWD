#include<stdio.h>

int main (){
int cod[2],q[2];
double preco[2],total;
    for (int i = 0; i < 2; i++)
{
    scanf("%d %d %lf", &cod[i], &q[i], &preco[i]);
}


    total = (q[0] * preco[0]) + (q[1] * preco[1]);
printf("VALOR A PAGAR: R$ %.2lf\n", total);

return 0;
}