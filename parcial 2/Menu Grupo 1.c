//Crear un menu que contenga tres opciones: 1. ingreso e impresion de vectores con datos enteros. 2. impresion de matrices con datos flotantes. #. salida
// Realizado por el grupo 1; Alarcon Genesis; Gutierrez Dayanara; Reyes Danilo
//inicia con incluir las librerias a utlizar
#include <stdio.h>
#include <stdlib.h>

#define MAX 10

void limpiar_pantalla() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int leerEntero(int max) {
    //leer entrada por teclado
    int n;
    while (1) {
        if (scanf("%d", &n) != 1 || n <= 0 || n > max) {
            while (getchar() != '\n');
            printf("Dato invalido (debe ser mayor que 0 y maximo %d): ", max);
        } else {
            while (getchar() != '\n');
            return n;
        }
    }
}

float leerFlotante(void) {
    //leer flotantes
    float x;
    while (1) {
        if (scanf("%f", &x) != 1 || x < 0 || x == (int)x) {
            while (getchar() != '\n');
            printf("Dato invalido (debe ser decimal con fraccion, no entero y no negativo): ");
        } else {
            while (getchar() != '\n');
            return x;
        }
    }
}

void ingresarVector(int v[], int n) {
    //numeros que desea poner en el vector
    for (int i = 0; i < n; i++) {
        printf("v[%d] (Mayor que 0): ", i);
        v[i] = leerEntero(1000000);
    }
}

void imprimirVector(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}


void ingresarMatriz(float m[MAX][MAX], int filas, int cols) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < cols; j++) {
            printf("m[%d][%d] (Decimal estricto, no negativo): ", i, j);
            m[i][j] = leerFlotante();
        }
    }
}


void imprimirMatriz(float m[MAX][MAX], int filas, int cols) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%8.2f", m[i][j]);
        }
        printf("\n");
    }
}

void opcion_vectores(void) {
    limpiar_pantalla();
    printf("=== OPCION 1: VECTORES (ENTEROS) ===\n");
    int v[MAX];
    int n;

    printf("Tamanio del vector (1 a %d): ", MAX);
    n = leerEntero(MAX);

    printf("\nIngrese los elementos:\n");
    ingresarVector(v, n);

    printf("\nVector resultante: ");
    imprimirVector(v, n);

    printf("\nPresiona ENTER para volver al menu principal...");
    getchar();
}

void opcion_matrices(void) {
    limpiar_pantalla();
    printf("=== OPCION 2: MATRICES (FLOTANTES NO ENTEROS) ===\n");
    float m[MAX][MAX];
    int filas, cols;

    printf("Numero de filas (1 a %d): ", MAX);
    filas = leerEntero(MAX);

    printf("Numero de columnas (1 a %d): ", MAX);
    cols = leerEntero(MAX);

    printf("\nIngrese los elementos (ej. 3.5, 2.1 - prohibido enteros):\n");
    ingresarMatriz(m, filas, cols);

    printf("\nMatriz resultante:\n");
    imprimirMatriz(m, filas, cols);

    printf("\nPresiona ENTER para volver al menu principal...");
    getchar();
}

void menu_iterativo(void) {
    int seleccion;
    while (1) {
        limpiar_pantalla();
        printf("=== MENU PRINCIPAL ===\n");
        printf("1. Ingreso e impresion de vectores con datos\n");
        printf("2. Ingreso e impresion de Matrices con datos flotantes\n");
        printf("3. Salir\n");

        printf("\nElige una opcion (1-3): ");
         if (scanf("%d", &seleccion) != 1) {
            while(getchar() != '\n');
            limpiar_pantalla();
            printf("Opcion no valida.\n");
            printf("Presiona ENTER para intentar de nuevo...");
            getchar();
            continue;
        }
        while(getchar() != '\n');

        if (seleccion == 1) {
            opcion_vectores();
        } else if (seleccion == 2) {
            opcion_matrices();
        } else if (seleccion == 3) {
            limpiar_pantalla();
            printf("Saliendo del programa...\n");
            break;
        } else {
            limpiar_pantalla();
            printf("Opcion no valida.\n");
            printf("Presiona ENTER para intentar de nuevo...");
            getchar();
        }
    }
}

int main(void) {
    menu_iterativo();
    return 0;
}


