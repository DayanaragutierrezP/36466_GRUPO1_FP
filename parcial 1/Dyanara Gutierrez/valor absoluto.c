#include <stdio.h>
#include <math.h>

int main() {
    double x, cubo, valor_absoluto;

    printf("Ingrese el valor de x: ");
    scanf("%lf", &x);

    cubo = x * x * x;

    valor_absoluto = fabs(cubo);

    printf("El cubo de %.2lf es: %.2lf\n", x, cubo);
    printf("El valor absoluto de x^3 es: %.2lf\n", valor_absoluto);

    return 0;
}
