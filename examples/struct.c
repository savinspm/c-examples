#include <stdio.h>
#include <string.h>

// Fijase como se inicializan los atributos de las estructuras
struct Alumno {
   char  nombre[50];
   char  apellidos[100];
   int   edad;
};
 
int main( ) {

    struct Alumno alumno1;        /* Declaramos alumno1 de tipo Alumno */
    struct Alumno alumno2;         /* Declaramos alumno2 de tipo Alumno */

    /* Inicializamos al alumno1 */
    strcpy( alumno1.nombre, "Benedicto");
    strcpy( alumno1.apellidos, "Miranda Ortega"); 
    alumno1.edad = 20;

    /* Inicializamos al alumno2 */
    strcpy( alumno2.nombre, "Juan");
    strcpy( alumno2.apellidos, "Caldera Patino");
    alumno2.edad = 22;

    /* print alumno1 info */
    printf( "Nombre y apellidos del alumno1: %s %s\n", alumno1.nombre, alumno1.apellidos);
    printf( "Edad: %d\n", alumno1.edad);

    /* print alumno2 info */
    printf( "Nombre y apellidos del alumno2: %s %s\n", alumno2.nombre, alumno2.apellidos);
    printf( "Edad: %d\n", alumno2.edad);

    return 0;
}