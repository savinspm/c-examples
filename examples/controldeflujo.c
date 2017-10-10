#include <stdio.h>


int main()
{
    // Bucle for
    /*
    Simplemente se muestran los valores de 0 a 10
    */
    printf("Bucle FOR\n");
    for (int i = 0; i < 10; i++) {
        printf("%d\n", i);
    }

    //Bucle WHILE
    /*
    
    */
    printf("Bucle WHILE\n");
    int n = 0;
    while (n < 10) {
        n++;
    
        /* Comprueba si es par */
        if (n % 2 == 0) {
            /* Si es par, pasa a la siguiente iteracion n+1 */
            continue;
        }
    
        /* En caso contrario indica que el numero es impar */
        printf("El numero %d es impar.\n", n);
    }
    
    // Bucle DO WHILE
    /*
    Incrementa el valor de m y lo aumenta en una unidad.
    */
    printf("Bucle DO WHILE\n");
    int m = 0;
    do{
        m += 1;
        printf ("%d\n", m);
    }while (m<10);
    
return 0;
}