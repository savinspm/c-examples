#include <stdio.h>

/*Los arrays son punteros*/
const int MAX = 3;

int main () {
    // declaramos nuestro array con tres elementos
    int  var[] = {10, 100, 200};
    // declaramos un entero i y un puntero, que se reserva espacio para 3
    // direcciones y un pointer que apunta a una unica direccion
    int i, *ptr[MAX], *pointer = NULL;

    //var[i] devuelve el entero 10, 100 y 200. Si anadimos
    // & devolvemos la direccion de memoria de esos enteros.
    // Eso es lo que almacenamos en ptr.
    for ( i = 0; i < MAX; i++) {
        ptr[i] = &var[i]; /* asignamos la direccion del entero. */
    }

    // Igual que en pointer.c, podemos acceder al valor
    // de la direccion de memoria mediante *
    for ( i = 0; i < MAX; i++) {
        printf("Valor de var[%d] = %d\n", i, *ptr[i] );
    }

    // apuntamos pointer a la primera posicion del array
    // Como se dijo, el nombre var, sin indicar elemento [], 
    // apunta a la primera posicion del array.
    pointer = var;
    for ( i = 0; i < MAX; i++) {
        printf("i = %d. La direccion de pointer %p tiene el valor %d\n", i, pointer, *pointer);
        // Apuntamos pointer a la siguiente posicion del array.
        // Mirad como la direccion se incrementa de 4 en 4. ¿Por que sucede eso?
        pointer++;
    }

    return 0;
}