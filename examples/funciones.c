#include <stdio.h>

/* Primero se declara la cabecera de todas las funciones
antes del main. Posteriomente se implementan (debajo del main) 
*/

int miprimerafuncion(int numero);

int main() {
    int valor = miprimerafuncion(1);

    printf("El valor de mi primera funcion es %d\n", valor);
    printf("Otra forma de mostrar el valor: %d\n", miprimerafuncion(1));
}

int miprimerafuncion(int numero) {
    return numero + 1;
}
