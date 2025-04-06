#include <stdio.h>

int mdc(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        int n1, d1, n2, d2, rn, rd;
        char op, barra1, barra2;

        scanf("%d %c %d %c %d %c %d", &n1, &barra1, &d1, &op, &n2, &barra2, &d2);

        // Operações
        if (op == '+') {
            rn = n1 * d2 + n2 * d1;
            rd = d1 * d2;
        } else if (op == '-') {
            rn = n1 * d2 - n2 * d1;
            rd = d1 * d2;
        } else if (op == '*') {
            rn = n1 * n2;
            rd = d1 * d2;
        } else if (op == '/') {
            rn = n1 * d2;
            rd = n2 * d1;
        }

        // Simplificação
        int divisor = mdc(rn < 0 ? -rn : rn, rd < 0 ? -rd : rd);
        int simp_n = rn / divisor;
        int simp_d = rd / divisor;

        
        printf("%d/%d = %d/%d\n", rn, rd, simp_n, simp_d);
    }

    return 0;
}