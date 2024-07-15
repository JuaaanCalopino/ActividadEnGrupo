#include <stdio.h>
#define fila 10
#define colum 10

// Función para limpiar la pantalla
void clear_screen() {
    printf("\033[H\033[J");  // Utiliza caracteres de escape ANSI para limpiar la pantalla
}

int main() {
    int laberinto[fila][colum] = {
        {1, 0, 1, 1, 1, 0, 1, 1, 1, 1},
        {1, 0, 1, 1, 1, 0, 0, 0, 1, 1},
        {1, 0, 1, 1, 1, 0, 1, 1, 1, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 1, 1},
        {1, 0, 1, 1, 1, 0, 1, 0, 1, 1},
        {1, 0, 1, 1, 1, 0, 1, 0, 0, 1},
        {1, 0, 1, 1, 1, 0, 1, 0, 0, 1},
        {1, 0, 1, 1, 1, 0, 0, 0, 0, 1},
        {1, 1, 1, 1, 1, 1, 0, 0, 1, 1},
        {1, 1, 1, 1, 1, 1, 0, 0, 1, 1}
    };
