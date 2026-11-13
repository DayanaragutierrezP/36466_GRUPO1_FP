// Desarrollar un menu el cual conste de 3 opciones, cada una de ellas te llevara a una actividad por hacer
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <math.h>

void main()
{
    int op, n, fil;
    float res = 0, i;
    do
    {
        printf("MENU\n");
        printf("1. Figura\n");
        printf("2. Serie\n");
        printf("3. Salir\n");
        printf("Ingrese opcion: ");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            do
            {
                printf("Ingrese numero de filas: ");
                scanf("%d", &fil);
            } while (fil <= 0);

            for (int i = 0; i < fil; i++)
            {
                for (int j = 0; j < fil; j++)
                {
                    if ((i == 0) || (i == fil - 1) || (j == 0) || (j == fil - 1))
                        printf("9 ");
                    else
                        printf("  ");
                }
                printf("\n");
            }
            break;

        case 2:
             res = 0;
            do
            {
                printf("Ingrese numero de terminos: ");
                scanf("%d", &n);
            } while (n <= 0);

            for (i = 1; i <= n; i++) // cantidad de terminos
            {
                if (i == n)
                    printf("%.2f^%.0f ", i, i); // 1^1 + 2^2 + 3^3 + ...
                else
                    printf("%.2f^%.0f + ", i, i);

                res = res + pow(i, i);
            }
            printf("\nEl resultado es %f\n", res);
            break;

        case 3:
            printf("Salir del menu...\n");
            break;

        default:
            printf("Opcion no valida\n");
            break;
        } // fin del switch

        getch();
        system("cls");

    } while (op != 3);
}
