#include <stdio.h>
#include <time.h>
 
//Punteros como parametros
void cambiarValor(unsigned long *numero);

int main () {
    
    //declaramos un numero y lo inicializamos a 1
    unsigned long numero = 1;
    printf("Valor: %ld\n", numero );

    // Ahora pasamos la direccion de memoria
    // de numero al metodo. Como es una variable
    // se utiliza & como se vio en otros ejemplos
    cambiarValor( &numero );

    /* imprimimos de nuevo el valor de numero */
    printf("Valor: %ld\n", numero );

    return 0;
}

void cambiarValor(unsigned long *nuevo) {
    /*Aqui estamos cambiando el valor de la direccion de memoria.
    Esta direccion es unica en el equipo y es donde se encuentra
    guardado el valor nuevo
    */
    //Para cambiar el valor en un puntero, tenemos que indicar *nuevo.
    // Si solo pusieramos nuevo = 2017 estariamos diciendo:
    // bc40d5c0 (direccion de memoria) = (es igual a) 2017 (un numero).
    // No tiene sentido 
    *nuevo = 2017;
    return;// Estais devolviendo void, es opcional
}