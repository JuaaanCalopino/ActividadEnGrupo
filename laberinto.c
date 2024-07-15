#include <stdio.h>  // Libreria utilizada para la entrada y salida de datos.
#define fila 10  // Definir la dimension de la matriz, la cual va a hacer de 10x10 
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

printf("\nInstrucciones de movimiento:\n");
    printf("a - Mover ratón hacia la izquierda\n");
    printf("w - Mover ratón hacia arriba\n");
    printf("s - Mover ratón hacia abajo\n");
    printf("d - Mover ratón hacia la derecha\n");
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

    return 0;
}
