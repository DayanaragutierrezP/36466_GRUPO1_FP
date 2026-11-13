// Programa de figuras con un menu de 3 opciones
// Creado por Genesis Alarcon


#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <math.h>

void main()
{
    int op, n, i, j, cont;
    int a, b, c;

    do
    {
        printf("\nMENU PRINCIPAL\n");
        printf("1. Figura\n");
        printf("2. Serie\n");
        printf("3. Salir\n");
        printf("Ingrese opcion: ");
        scanf("%d", &op);

        switch(op)
        {
            case 1:
                do
                {
                    printf("Ingrese numero de filas: ");
                    scanf("%d", &n);
                } while(n <= 0);

                for(i = 1; i <= n; i++)
                {
                    for(j = 1; j <= i; j++)
                    {
                        printf("* ");
                    }
                    printf("\n");
                }

                break;

            case 2:
                printf("\n1. Numero primo\n");
                printf("2. Fibonacci\n");
                printf("Ingrese opcion: ");
                scanf("%d", &op);

                if(op == 1)
                {
                    printf("Ingrese un numero: ");
                    scanf("%d", &n);

                    cont = 0;

                    for(i = 1; i <= n; i++)
                    {
                        if(n % i == 0)
                            cont++;
                    }

                    if(n > 1 && cont == 2)
                        printf("Es un numero primo\n");
                    else
                        printf("No es un numero primo\n");
                }
                else if(op == 2)
                {
                    do
                    {
                        printf("Ingrese numero de terminos: ");
                        scanf("%d", &n);
                    } while(n <= 0);

                    a = 0;
                    b = 1;

                    for(i = 1; i <= n; i++)
                    {
                        printf("%d ", a);
                        c = a + b;
                        a = b;
                        b = c;
                    }

                    printf("\n");
                }
                else
                    printf("Opcion no valida\n");

                break;

            case 3:
                printf("Salir del programa...\n");
                break;

            default:
                printf("Opcion no valida\n");
                break;
        }

        getch();
        system("cls");

    } while(op != 3);
}
