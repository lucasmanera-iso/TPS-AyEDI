#include <stdio.h>

void ejercicioA() {
    int unEntero = 10;
    char unCaracter = 'A';
    printf("||||||||    EJECRCICIO a    ||||||||\n");
    printf("Escribir en C un programa que inicialice y muestre una variable de tipo int y otra de tipo char\n \n");
    printf("Este es una variable tipo Entero %d \n", unEntero);
    printf("Este es una variable tipo Caracter %c \n\n", unCaracter);
}


void ejercicioB(){
    printf("||||||||    EJECRCICIO b    |||||||| \n");
    printf("Escribir en C un programa que inicialice una variable de tipo float y otra de tipo double. Asignarle el valor -123000.567. Formatear la salida para que el valor de la variable se visualice: \n - En su formato original \n - Utilizando 2 caracteres para la parte decimal \n - Solo la parte entera\n \n");
    
    float varTipoFloat = -123000.567;
    double varTipoDouble = -123000.567;


    printf("Variable tipo Float con valor negativo: \n");
    printf("\t Formato orginal : %f \n", varTipoFloat);
    printf("\t Formato con 2 decimales nada mas : %.2f \n", varTipoFloat);
    printf("\t Formato Entero : %d \n \n", (int)varTipoFloat);


    printf("Variable tipo Double con valor negativo: \n");
    printf("\t Formato orginal : %lf \n", varTipoDouble);
    printf("\t Formato con 2 decimales nada mas : %.2lf \n", varTipoDouble);
    printf("\t Formato Entero : %d \n \n", (int)varTipoDouble);
}


void ejercicioC(){
    printf("||||||||    EJECRCICIO c    |||||||| \n");

    float unFloat = 3.4E+38;
    double unDouble = 1.7E+308;
    int unEntero = 2147483647;
    short unShort = 32767;
    char unCaracter = 'Z';
    long unLong = 2147483647; 

    printf("El tamano de la variable tipo :\n");

    printf("El tamano de la variable tipo float es %d bytes y su valor es %e \n",sizeof(unFloat), unFloat);
    printf("El tamano de la variable tipo double es %d bytes y su valor es %E \n",sizeof(unDouble), unDouble);
    printf("El tamano de la variable tipo entero es %d bytes y su valor es %d \n",sizeof(unEntero), unEntero);
    printf("El tamano de la variable tipo short es %d bytes y su valor es %d \n",sizeof(unShort), unShort);
    printf("El tamano de la variable tipo char es %d bytes y su valor es %c \n",sizeof(unCaracter), unCaracter);
    printf("El tamano de la variable tipo long es %d bytes y su valor es %ld \n \n",sizeof(unLong), unLong);

}

void ejercicioD(){
    printf("||||||||    EJECRCICIO d    |||||||| \n");

    short unShort = 40000;
    printf("Lo que sucede si cambiamos el valor de la variable short a 40000 es que: \n");
    printf("El tamano de la variable tipo short sigue siendo de %d bytes pero su valor cambia a %d \n",sizeof(unShort), unShort);
}


int main() {
    ejercicioA();
    ejercicioB();
    ejercicioC();
    ejercicioD();
    system("pause");
    return 0;

}