#include <stdio.h>

int main() {
    float x1,x2,y1,y2;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    float cal= (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    float raiz = cal;
        for (int i =0; i< 10; i++)
    {
        raiz = (raiz + cal / raiz)/ 2;
    }
    printf("%.4f\n", raiz);
    return 0;
}