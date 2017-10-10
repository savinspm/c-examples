// Aqui se indican las librerias
#include <stdio.h>

/*
Este es el metodo principal. Devuelve un entero que normalmente es 0
Se puede indicar otro numero para tener control de errores si se quiere.
*/
int main()
{
   // printf se utiliza para imprimir por pantalla. Se incluye el \n para que el 
   // siguiente texto aparezca en la siguiente linea
   printf("Hello, World!\n");

   // Ademas, permite la salida formateada como se muestra a continuacion
   int numero = 10;
   printf("Numero : %d\n", numero);
   return 0;
}