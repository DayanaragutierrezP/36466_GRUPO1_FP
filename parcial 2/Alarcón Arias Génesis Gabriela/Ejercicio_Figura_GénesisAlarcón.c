// Programa de menu de figuras y series
// Creado por Genesis Alarcon


#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <math.h>

void main()
{
    int op, sub, n, i, j, cont;
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
                printf("\n1. Cuadrado\n");
                printf("2. Triangulo\n");
                printf("Ingrese figura: ");
                scanf("%d", &sub);

                do
                {
                    printf("Ingrese numero de filas: ");
                    scanf("%d", &n);
                } while(n <= 0);

                if(sub == 1)
                {
                    for(i = 0; i < n; i++)
                    {
                        for(j = 0; j < n; j++)
                        {
                            if(i == 0 || i == n-1 ||
                               j == 0 || j == n-1)
                                printf("* ");
                            else
                                printf("  ");
                        }
                        printf("\n");
                    }
                }
                else if(sub == 2)
                {
                    for(i = 1; i <= n; i++)
                    {
                        for(j = 1; j <= i; j++)
                        {
                            printf("* ");
                        }
                        printf("\n");
                    }
                }
                else
                    printf("Figura no valida\n");

                break;

            case 2:
                printf("\n1. Numero primo\n");
                printf("2. Fibonacci\n");
                printf("Ingrese opcion: ");
                scanf("%d", &sub);

                if(sub == 1)
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
                else if(sub == 2)
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
