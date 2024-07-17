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
int main() {
    char maze[N][N];
    int i, j;

    // Inicializa el laberinto con paredes
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            maze[i][j] = WALL;
        }
    }

    // Semilla para la generación aleatoria
    srand(time(NULL));

    // Genera el laberinto
    generateMaze(maze, 1, 1);

    // Establece el inicio y el final
    maze[1][1] = START;
    maze[N-3][N-3] = END;

    // Imprime el laberinto
    printf("Laberinto generado:\n");
    printMaze(maze);

    // Resuelve el laberinto
    int steps = 0;
    if (solveMaze(maze, 1, 1, N-2, N-2, &steps)) {
        printf("\nSolución encontrada en %d movimientos.\n", steps);
    } else {
        printf("\nNo se encontró solución.\n");
    }

    return 0;
}
