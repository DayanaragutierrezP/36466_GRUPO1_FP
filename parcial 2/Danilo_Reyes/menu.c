#include <stdio.h>

int main(void)
{
    const char *meses[] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
                           "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    int anio = 0;
    int mes = 0;
    int dia = 0;
    int maxDia;
    int opcion;
    int fechaIngresada = 0;

    do
    {
        printf("\nmenu \n");
        printf("1. Validar fecha\n");
        printf("2. Desplegar serie de numeros\n");
        printf("3. Desplegar serie numero\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion (1-4): ");
        scanf("%d", &opcion);

        switch (opcion)
        {
            case 1:
                do
                {
                    printf("Ingrese el anio: ");
                    scanf("%d", &anio);
                } while (anio < 1900 || anio > 2025);

                do
                {
                    printf("Ingrese el mes: ");
                    scanf("%d", &mes);
                } while (mes < 1 || mes > 12);

                if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
                {
                    maxDia = 31;
                }
                else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
                {
                    maxDia = 30;
                }
                else
                {
                    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
                    {
                        maxDia = 29;
                    }
                    else
                    {
                        maxDia = 28;
                    }
                }

                do
                {
                    printf("Ingrese el dia (1-%d): ", maxDia);
                    scanf("%d", &dia);
                } while (dia < 1 || dia > maxDia);

                fechaIngresada = 1;

                printf("\n--- RESULTADOS ---");
                printf("\nFecha ingresada: %d de %s de %d\n", dia, meses[mes - 1], anio);

                if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
                {
                    printf("El ano %d SI es bisiesto.\n", anio);
                }
                else
                {
                    printf("El ano %d NO es bisiesto.\n", anio);
                }

                if ((mes == 3 && dia >= 21) || mes == 4 || mes == 5 || (mes == 6 && dia < 21))
                    printf("Estacion: Primavera\n");
                else if ((mes == 6 && dia >= 21) || mes == 7 || mes == 8 || (mes == 9 && dia < 23))
                    printf("Estacion: Verano\n");
                else if ((mes == 9 && dia >= 23) || mes == 10 || mes == 11 || (mes == 12 && dia < 21))
                    printf("Estacion: Otonio\n");
                else
                    printf("Estacion: Invierno\n");

                break;

            case 4:
                printf("\nSaliendo del programa. ¡Hasta luego!\n");
                break;

            default:
                printf("\nOpcion invalida. Intente de nuevo.\n");
        }

    } while (opcion != 4);

    return 0;
}








