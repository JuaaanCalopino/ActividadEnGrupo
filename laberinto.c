#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 14
#define PATH ' '
#define WALL '#'
#define START 'S'
#define END ' E'

// Estructura para representar direcciones de movimiento
typedef struct {
    int x, y;
} Direction;

// Direcciones posibles: derecha, abajo, izquierda, arriba
Direction directions[] = {
    {0, 1},   // Derecha
    {1, 0},   // Abajo
    {0, -1},  // Izquierda
    {-1, 0}   // Arriba
};

// Prototipos de funciones
void generateMaze(char maze[N][N], int x, int y);
void printMaze(char maze[N][N]);
int solveMaze(char maze[N][N], int x, int y, int endX, int endY, int *steps);
+++++++++++
        for (int j = 0; j < colum; j++) {
            if (i == raton_x && j == raton_y) {
                printf("R ");  // Representación del ratón
            } else if (laberinto[i][j] == 1) {
                printf("0");  // Pared
            } else {
                printf(" ");  // Espacio libre
            }
        }
        printf("\n");
    }

   printf("\nInstrucciones de movimiento:\n");
    printf("a - Mover raton hacia la izquierda\n");
    printf("w - Mover raton hacia arriba\n");
    printf("s - Mover raton hacia abajo\n");
    printf("d - Mover raton hacia la derecha\n");
    printf("q - Salir del laberinto\n");
    char direccion;
    while (1) {  // Bucle infinito para movimiento continuo
        printf("\nraton: ");
        scanf(" %c", &direccion);

        clear_screen();
        printf("raton:\n");

        // Actualizar posición del ratón según la dirección ingresada y validar movimiento
        if (direccion == 'w' && raton_x > 0 && laberinto[raton_x - 1][raton_y] == 0) {
            raton_x--;
        } else if (direccion == 'a' && raton_y > 0 && laberinto[raton_x][raton_y - 1] == 0) {
            raton_y--;
        } else if (direccion == 's' && raton_x < fila - 1 && laberinto[raton_x + 1][raton_y] == 0) {
            raton_x++;
        } else if (direccion == 'd' && raton_y < colum - 1 && laberinto[raton_x][raton_y + 1] == 0) {
            raton_y++;
        } else if (direccion == 'q') {
            printf("Saliendo del laberinto...\n"); 
        } else {
            printf("Movimiento no válido.\n");
        }
// Mostrar laberinto con la nueva posición del ratón
        for (int i = 0; i < fila; i++) {
            for (int j = 0; j < colum; j++) {
                if (i == raton_x && j == raton_y) {
                    printf("R ");  // Representación del ratón
                } else if (laberinto[i][j] == 1) {
                    printf("0");  // Pared
                } else {
                    printf(" ");  // Espacio libre
                }
            }
            printf("\n");
        }
    }
    return 0;

    
}
