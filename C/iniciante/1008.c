#include<stdio.h>

int main(){
int nf, ht;
double vh ,sal;

    scanf("%d %d %lf",&nf, &ht, &vh);
    

sal= ht*vh;
printf("NUMBER = %d\n", nf);
printf("SALARY = U$ %.2lf\n", sal);

    return 0;
}