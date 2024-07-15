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
printf("¡Bienvenido al Laberinto!\n\n");
    int raton_x = 0, raton_y = 1;  // Posición inicial del ratón

    clear_screen();
    // Mostrar laberinto inicial con posición del ratón
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

