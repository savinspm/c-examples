#include <stdio.h>
// Se anade la libreria string.h para trabajar con los 
// arrays de char
#include <string.h>

int main()
{
    char str1[12] = "Hello";
    char str2[12] = "World";
    char str3[12];
    int  len ;

    /* copiamos str1 en str3 */
    strcpy(str3, str1);
    printf("strcpy( str3, str1) :  %s\n", str3 );

    /* concatenamos str1 y str2 */
    strcat( str1, str2);
    printf("strcat( str1, str2):   %s\n", str1 );

    /* mostramos la longitud de str1 despues de la concatenacion */
    /* Se puede conocer la longitud porque el array de char siempre termina con \0*/
    len = strlen(str1);
    printf("strlen(str1) :  %d\n", len );

    printf("Se imprime caracter a caracter: \n");
    for (int i =0 ; i < strlen(str1); i++){
        printf("%c \n", str1[i]);
    }
    return 0;
}