#include <stdio.h>

//Al compilar aparecen warning. No son errores
int main () {

    int  var = 20;   /* un entero */

    /* la declaracion de un puntero que apuntara a un entero
    Una buena practica es inicializarlo a NULL para que no 
    apunte a ninguna direccion de memoria de nuestro equipo
    */

    int  *ip = NULL;        


    // Cuando tenemos una variable "normal", como es el caso de "var", 
    // mediante & se devuelve la direccion de memoria en la que esta
    // almacenada var.
    ip = &var;  /* Ahora el valor de ip es la direccion de memoria donde esta almacenada var*/

    printf("Direccion de la variable var: %p\n", &var  );

    /* Direccion de memoria almacenada en el puntero p */
    printf("Direccion almacenada en el puntero p: %p\n", ip );

    /* Se accede al valor usando punteros.
    Para ello se hace uso del operador *
    */
    printf("Valor al que apunta ip: %d\n", *ip );

    /*Para rizar el rizo, veamos el siguiente ejemplo*/
    /*ip es la direccion de memoria, pero si se pone antes *
    se esta accediendo al valor al que apunta la direccion
    de memoria. Pero si se anade & volvemos a mostrar la direccion
    de memoria.*/
    printf("Direccion de memoria de ip: %p\n", &(*ip) );

    return 0;
}