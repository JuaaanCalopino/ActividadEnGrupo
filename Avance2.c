#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 14
#define PATH ' '
#define WALL '*'
#define START 'I'
#define END 'F'
#define PATH_MARKED '-'  // smbolo para marcar el camino recorrido

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

    // Imprime el laberinto inicial
    printf("Laberinto generado:\n");
    printMaze(maze);

    // Resuelve el laberinto
    int steps = 0;
    if (solveMaze(maze, 1, 1, N-3, N-3, &steps)) {
        printf("\nSolucion encontrada en %d movimientos.\n", steps);
    } else {
        printf("\nNo se encontro solucion.\n");
    }

    return 0;
}

// Funcion para generar el laberinto
void generateMaze(char maze[N][N], int x, int y) {
    maze[x][y] = PATH;
    for (int i = 0; i < 4; i++) {
        int r = rand() % 4;
        Direction temp = directions[i];
        directions[i] = directions[r];
        directions[r] = temp;
    }
    for (int i = 0; i < 4; i++) {
        int newX = x + directions[i].x * 2;
        int newY = y + directions[i].y * 2;
        if (newX > 0 && newY > 0 && newX < N-1 && newY < N-1 && maze[newX][newY] == WALL) {
            maze[x + directions[i].x][y + directions[i].y] = PATH;
            generateMaze(maze, newX, newY);
        }
    }
}

// Funcion para imprimir el laberinto
void printMaze(char maze[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%c ", maze[i][j]);
        }
        printf("\n");
    }
}

// Funcion para resolver el laberinto
int solveMaze(char maze[N][N], int x, int y, int endX, int endY, int *steps) {
    if (x == endX && y == endY) {
        maze[x][y] = END;
        printMaze(maze);
        return 1;
    }

    if (x < 0 || x >= N || y < 0 || y >= N || maze[x][y] == WALL || maze[x][y] == PATH_MARKED) {
        return 0;
    }

    maze[x][y] = PATH_MARKED;
    (*steps)++;

    printMaze(maze); // Imprime el laberinto después de cada movimiento

    for (int i = 0; i < 4; i++) {
        int newX = x + directions[i].x;
        int newY = y + directions[i].y;
        if (solveMaze(maze, newX, newY, endX, endY, steps)) {
            return 1;
        }
    }

    maze[x][y] = PATH; // Si no encontramos solución, revertimos el marcado
    (*steps)--;
    return 0 ;

}
