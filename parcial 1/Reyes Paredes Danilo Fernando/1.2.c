//1.2 Leer un numero real x y calcular su valor absoluto y elevarlo al cubo
#include <stdio.h>

int main() {
    double x, absoluto, resultado;

    printf("Ingrese un numero real x: ");
    scanf("%lf", &x);

    if (x < 0) {
        absoluto = -x;
    } else {
        absoluto = x;
    }

    resultado = absoluto * absoluto * absoluto;

    printf("|x|^3 = %.3f\n", resultado);
    return 0;
}
//Creado por Danilo Reyes