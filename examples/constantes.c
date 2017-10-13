#include <stdio.h>

/*
Las macros son preprocesados y serán reemplazadas 
por su declaración asociada antes de compilar el código. 
Por lo tanto, no tiene no se puede tener los 
nombres de las macros en tiempo de ejecución. Pero, se puede
generar el nombre de cadena en tiempo de compilación:
*/
#define SHOW_DEFINE(x) printf("MACRO: %s\n", #x)
# define CHARLIE 6

int main() {
    // Se pueden utilizar en cualquier parte del codigo, 
    // pero no imprimir de cualquier forma
    int a = 10 - CHARLIE;
    printf("Valor de a: %d\n", a);
    SHOW_DEFINE(CHARLIE);

    // Esto genera una violacion de segmento
    // printf("%s", CHARLIE);

    return 0;
}