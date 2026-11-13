//El codigo nos va mostrar un menu con 3 opciones que vamos a poder usar
#include <stdio.h>
// Traemos la libreria pa' poder usar printf y scanf
#include <stdlib.h>
// Libreria pa' poder usar system("pause") y que la ventana no se cierre sola

int main()
// Aqui arranca todo el programa
{
    int opcion = 0;
    // Aqui guardamos lo que escoja el usuario en el menu (arranca en 0)
    int n;
    // Guarda cuantas filas o cuantos terminos quiere el usuario
    int i, j;
    // Contadores pa' los ciclos (i son las filas, j las columnas)
    int a, b, c;
    // Variables pa' la serie Fibonacci

    do
    // Metemos todo en un do-while pa' que el menu salga una y otra vez hasta que pida salir
    {
        printf("\nMENU\n");
        // Sacamos el titulo del menu
        printf("1. Figura\n");
        // Mostramos la opcion 1
        printf("2. Serie\n");
        // Mostramos la opcion 2
        printf("3. Salir\n");
        // Mostramos la opcion 3
        printf("Ingrese opcion: ");
        // Le pedimos al usuario que escoja una
        scanf("%d", &opcion);
        // Agarramos el numero que metio y lo guardamos en opcion

        switch (opcion)
        // Miramos que numero metio y brincamos al caso que toca
        {
            case 1:
            // Si metio 1, toca dibujar la figura
                printf("Ingrese numero de filas: ");
                // Preguntamos de que tamano quiere el cuadro
                scanf("%d", &n);
                // Guardamos ese numero en n

                for (i = 1; i <= n; i++)
                // Ciclo de afuera: va fila por fila, de la 1 hasta la n
                {
                    for (j = 1; j <= n; j++)
                    // Ciclo de adentro: va columna por columna en cada fila
                    {
                        if (i == 1 || i == n || j == 1 || j == n)
                        // Si estamos en la primera fila, la ultima, o en la primera o ultima columna
                        {
                            printf("1 ");
                            // Ponemos un 1 pa' ir armando el borde
                        }
                        else
                        // Y si estamos en el medio
                        {
                            printf("  ");
                            // Dejamos puro espacio pa' que quede hueco
                        }
                    }
                    printf("\n");
                    // Cuando acaba una fila, bajamos a la siguiente linea
                }
                break;
                // Cortamos aqui pa' que no se meta al caso 2

            case 2:
            // Si metio 2, toca sacar la serie
                printf("Ingrese numero de terminos: ");
                // Preguntamos cuantos numeros de la serie quiere ver
                scanf("%d", &n);
                // Guardamos ese numero

                a = 0;
                // El primer numero de la serie arranca en 0
                b = 1;
                // El segundo arranca en 1

                for (i = 1; i <= n; i++)
                // Damos vueltas tantas veces como terminos pidio
                {
                    printf("%d ", a);
                    // Mostramos el numero que toca
                    c = a + b;
                    // Sacamos el que sigue sumando los dos de atras
                    a = b;
                    // Corremos un puesto: a toma el valor de b
                    b = c;
                    // Y b toma el valor del que acabamos de sacar
                }
                printf("\n");
                // Bajamos de linea cuando termina la serie
                break;
                // Cortamos aqui

            case 3:
            // Si metio 3, nos vamos
                printf("Saliendo del programa...\n");
                // Mensaje de chao
                break;
                // Cortamos aqui

            default:
            // Si metio cualquier otra cosa que no sea 1, 2 o 3
                printf("Opcion no valida\n");
                // Le avisamos que se equivoco
                break;
                // Cortamos aqui
        }
    } while (opcion != 3);
    // Seguimos repitiendo el menu mientras no haya escogido 3

    system("pause");
    // Deja la ventana abierta hasta que toquen una tecla
    return 0;
    // Todo salio bien, cerramos el programa
}
//Creado por Danilo Reyes
