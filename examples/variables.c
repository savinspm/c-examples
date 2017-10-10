#include <stdio.h>

int main() 	{
    /*Forma 1*/
    int multiplicador; /* defino multiplicador como un entero */
    int multiplicando; /* defino multiplicando como un entero */
    int resultado; /* defino resultado como un entero */
    multiplicador = 1000 ; /* les asigno valores */
    multiplicando = 2 ;
    
    /*Forma 2*/
    // int multiplicador = 1000; /* defino multiplicador como un entero y asigno valor*/
    // int multiplicando = 2; /* defino multiplicando como un entero y asigno valor*/
    // int resultado = 0; /* defino resultado como un entero y asigno valor*/
    

    /*Forma 3*/
    // int multiplicador = 1000, multiplicando = 2, resultado = 0; /*defino y asigno valor en linea*/
    
    /*Realizo operaciones con ellas*/
    resultado = multiplicando * multiplicador ;
    printf("Resultado = %d\n", resultado); /* muestro el resultado */
    return 0;
}