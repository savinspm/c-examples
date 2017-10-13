#include <stdio.h>

/* Primero se declara la cabecera de todas las funciones
antes del main. Posteriomente se implementan (debajo del main) 
*/

int imprimirArray(char letras[], int numeros[], int cantidad);

int main() {

    char asignatura [] = {"Multiprocesadores"};
    // Hay que indicar la cantidad de elementos que tiene nuestro array
    int cantidad = 5;
    int calificaciones [] = {5,10,8,7,4};
    
    imprimirArray(asignatura, calificaciones, cantidad);

}

int imprimirArray(char letras[], int numeros[], int cantidad) {
    // Asi se imprime el array de char
    printf("%s", letras);
    printf("\n");

    // Asi se imprime el array de numeros.
    // Es necesario indicar la cantidad de elementos
    // Probad a cambiar "cantidad" por el valor 10.
    // Que valores tiene el array numeros despues de i = 4?
    for (int i = 0 ; i < cantidad; i++ ){
        printf ("%d, ", numeros[i]);
    }
    printf("\n");
}
