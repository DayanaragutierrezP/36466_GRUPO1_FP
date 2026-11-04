//1.3 Leer 1 numeros enteros a y b y determinar si a se puede dividir para b
#include <stdio.h>

int main() {
    int a, b, resto;

    printf("Ingrese el valor de a: ");
    scanf("%d", &a);
    printf("Ingrese el valor de b: ");
    scanf("%d", &b);

    if (b == 0) {
        printf("Error: division entre cero\n");
    } else {
        resto = a % b;
        if (resto == 0) {
            printf("a es divisible entre b\n");
        } else {
            printf("a no es divisible entre b\n");
        }
    }

    return 0;
}
//Creado por Danilo Reyes 