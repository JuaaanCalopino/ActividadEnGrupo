# Laberinto
Este algoritmo simulá un juego interactivo donde un raton debe de moverse dentro de un laberinto, el cual es representado por una matriz predefinida de 13x13, para ir al juego del laberinto ingrese [ aqui](https://github.com/JuaaanCalopino/ActividadEnGrupo/blob/main/Laberinto_Final.cpp).
.
## Funcionalidades: 
1. ### Generación aleatoria del laberinto
- El laberinto se genera dinámicamente con dimensiones predefinidas (13x13).
- Las paredes y espacios libres dentro del laberinto se determinan aleatoriamente, asegurando que exista al menos una ruta viable desde el punto de inicio hasta la salida.
2. ### Movimiento automatico del ratón: 
- El simbolo '$' se mueve automáticamente buscando el camino más corto hacia la salida.
- El algoritmo implementado garantiza que el simbolo '$' encuentre la solución óptima al laberinto generado.
3. ### Visualización Continua:

- Después de cada movimiento del simbolo '$', la pantalla se actualiza para mostrar la posición actualizada del laberinto.
- Se utiliza una interfaz de línea de comandos para proporcionar información sobre el progreso del simbolo '$' hacia la salida.

4. ### Finalización del juego:

- El juego concluye cuando el simbolo en este caso '$' alcanza la salida del laberinto.
- Se muestra un mensaje indicando cuantos movimientos a hecho el simbolo '$' para encontrar la salida de manera automática, mediante un algorito de busqueda en profundidad de manera recursiva.
