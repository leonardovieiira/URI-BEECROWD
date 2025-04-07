#include <stdio.h>
 
int main() {
 
double a, b, c;
scanf("%lf %lf %lf", &a, &b, &c );

double aret= (a*c)/2;
double ac = 3.14159 * (c*c);
double at= (a+b)* c / 2;
double aq= b*b;
double ar= a*b;

printf("TRIANGULO: %.3lf\n",aret);
printf("CIRCULO: %.3lf\n",ac);
printf("TRAPEZIO: %.3lf\n",at);
printf("QUADRADO: %.3lf\n",aq);
printf("RETANGULO: %.3lf\n",ar);
 
    return 0;
}