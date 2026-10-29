#include <stdio.h>

int main() {
    int anio;


    printf("Ingrese un anio: ");
    scanf("%d", &anio);


    if (anio <= 0) {
        printf("Error: Ingrese un anio valido mayor que cero.\n");
    } else {

        if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
            printf("El anio %d ES bisiesto.\n", anio);
        } else {
            printf("El anio %d NO es bisiesto.\n", anio);
        }
    }

    return 0;
}
