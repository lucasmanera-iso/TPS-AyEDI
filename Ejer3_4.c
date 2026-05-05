#include <stdio.h>
#include <stdlib.h>

int main(){
    char unChar;
    int unInt;
    double unDouble;

    printf("Ingrese un Caracter: \n");
    scanf(" %c", &unChar);

    printf("Ingrese un Numero Entero: \n");
    scanf(" %d", &unInt);

    printf("Ingrese un Numero Real: \n");
    scanf(" %lf", &unDouble);

    printf("Su Caracter es: %c \n",unChar);
    printf("Su Caracter es: %d \n",unInt);
    printf("Su Caracter es: %.2f \n",unDouble);

    system("pause");
    return 0;
}