#include <stdio.h>//inicializacion de el algoritmo 
#define fila 10//definir las dimeciones del la matriz
#define colum 10
// Función para limpiar la pantalla (utilizando caracteres de escape ANSI)
void clear_screen() {
    printf("\033[H\033[J");
}
//inicialización de el algoritmo con la función principal
int main() {
/*matriz con valores de 1 y 0 para que sea mucho mas facil generar comandos 
la matriz muestra como esta diseñado el algoritmo*/
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
    return 0;
}
// Posición inicial del ratón(usuario)
    int raton_x = 0, raton_y = 1;  //con la coordenadas o y 1

    // Mostrar laberinto inicial
    clear_screen();
    printf("¡Bienvenido al Laberinto!¡espero verte salir!");
    /*bucles de for anidados, para que forme el laberinto, 0->son los caminos libres,
    1-> son paredes o obtaculos que no puede pasar*/
    for (int i = 0; i < fila; i++) {
        for (int j = 0; j < colum; j++) {
            if (i == raton_x && j == raton_y) {
                printf("R ");  // Representación del ratón
            } else if (laberinto[i][j] == 1) {
                printf("▆");  // Pared
            } else {
                printf(" ");  // Espacio libre
            }
        }
        printf("\n");
    }
