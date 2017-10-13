#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// En ocasiones, nuestras variables tienen que cambiar dinamicamente 
// durante la ejecucion. Para ello se utiliza el comando malloc 
// y siempre devuelve un puntero.

// Como ejemplo, suponed un array de enteros que se inicializa con los
// datos de un archivo. A priori no conocemos cuandos datos va a 
// tener dicho archivo.

// Una vez hemos terminado de usar el puntero y su informacion
// dejamos libre la memoria que estabamos ocupando.
// Para ello se usa la funcion free y se le pasa como parametro
// el puntero

int main () {
    char *str;

    /* Cuando se reserva memoria con malloc no se libera de forma automatica
    Tenemos que indicar al programa cuando la queremos liberar, ya que somos
    nosotros los que la estamos reservando.
    */
    str = (char *) malloc(20);
    strcpy(str, "Multiprocesadores");
    // Vease como el puntero, dependiendo si se indica
    // %s o %p se muestra el string o la direccion de memoria
    printf("Texto = %s,  Direccion = %p\n", str, str);

    /* Asi se aumenta la cantidad memoria reservada */
    str = (char *) realloc(str, 25);
    // Concatenamos mas texto
    strcat(str, " 2017");
    printf("Texto = %s,  Direccion = %p\n", str, str);

    /* Liberamos la memoria */
    free(str);

    return(0);
}