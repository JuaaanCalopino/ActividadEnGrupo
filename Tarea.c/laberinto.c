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