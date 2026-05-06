/*
------------------------------------------------------------///////OBJETIVO///////------------------------------------------------------------

                                Desarrollar un programa que permita ingresar los datos de alumnos (número de libreta y notas de dos parciales)
                                y determine su condición final (Promocionó, Regularizó o Libre) según las reglas dadas
                                Además, mostrar los datos, promedios y notas del alumno junto con su condición

------------------------------------------------------------///////ESTRATEGICA///////----------------------------------------------------------

                                Primero se solicitarán los datos del alumno (libreta y notas)
                                Luego se verificará si cada parcial está aprobado mediante una función
                                Después se calculará el promedio de las notas con otra función
                                Con esos datos se determinará la condición final del alumno usando estructuras de control (if)
                                Finalmente, se mostrará toda la información en pantalla
                                El proceso se repetirá mientras el usuario lo desee

------------------------------------------------------------///////DESCOMPOSICION///////--------------------------------------------------------             

                                - consultarDatos(): ingreso y validación de datos
                                - calcularCondicion(): determina la categoría del alumno
                                - calcularPromedio(): calcula el promedio de notas
                                - examenAprobado(): verifica si una nota está aprobada
                                - main(): controla el flujo general del programa
                                - mostrarCondicion(): elige y adjunta las demas funciones para mostrarse o no

*/


#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*DEFINIMOS VARIABLES GLOBALES*/
double parcial1;
double parcial2;
int nroLibreta;

/*PROTOTIPOS DE FUNCIONES*/
void consultarDatos();
char* calcularCondicion(double p1, double p2);
double calcularPromedio(double p1, double p2);
bool examenAprobado(double p1 , double p2);
void mostrarCondicion();

/*FUNCION MAIN*/
int main()
{
    mostrarCondicion();
    return 0;
}

void consultarDatos(){
    printf("Ingrese el numero de la libreta\n");
    scanf("%d",&nroLibreta);   

                        // Validacion de datos ingresados
    double resultado1;
    do {

        printf("Ingrese la nota del primer parcial (0-10):\n");
        resultado1 = scanf("%lf", &parcial1);

        if (resultado1 != 1 || parcial1 < 0 || parcial1 > 10) {
            printf("Error nota invalida \n");
            while(getchar() != '\n');
        }

    } while (resultado1 != 1 || parcial1 < 0 || parcial1 > 10);


                        // Validacion de datos ingresados
    double resultado2;
    do {
        printf("Ingrese la nota del segundo parcial (0-10):\n");
        resultado2 = scanf("%lf", &parcial2);

        if (resultado2 != 1 || parcial2 < 0 || parcial2 > 10) {
            printf("Error nota invalida \n");
            while(getchar() != '\n');
        }

    } while (resultado2 != 1 || parcial2 < 0 || parcial2 > 10);


    //Fucion que almacena los valores correspodientes en cada una de las variables que nos serviran para demas funciones
}

char* calcularCondicion(double p1, double p2){

    double promedio = (p1 + p2) / 2;

    if (p1 >= 6 && p2 >= 6)
    {
        if (promedio >= 7)
        {
            return "Promocion"; 
        }
        else{
            return "Regular"; 
        }
    }
    else{
        return "Libre";
    }

    //Funcion que devuelve una cadena de caracteres a partir de la condicion de cada alumno
}

double calcularPromedio(double p1, double p2){
    double promedio;
    promedio = (p1+p2)/2;
    return promedio;
    //Funcion que realiza la operacion que nos devolvera el promedio del alumno (necesaria para la consigna)
}

bool examenAprobado(double p1, double p2){

if (p1>=6 || p2>=6)
{
    return true;
}
return false;

    //Funcion booleana que retorna verdadero si hay algun o ambos examenes aprobados (necesaria para la consigna)
}

void mostrarCondicion(){
    char aux = 's'; //variable local que se utiliza para el do while

    char condicion[15];

    do
    {
        consultarDatos();
        
        strcpy(condicion, calcularCondicion(parcial1, parcial2));

        if (examenAprobado(parcial1,parcial2))
        {
            printf("Algun/Ambos examen/es Aprobado/s \n");
        }    

        printf("Condicion: %s\n", condicion);
        printf("Libreta: %d\n", nroLibreta);
        printf("Parcial 1: %.2lf\n", parcial1);
        printf("Parcial 2: %.2lf\n", parcial2);

        if (strcmp(condicion, "Promocion") == 0 || strcmp(condicion, "Regular") == 0)
        {
            printf("El promedio es: %.2lf \n",calcularPromedio(parcial1, parcial2));
        }

        printf("Quiere seguir evaluando condiciones? (s/n)\n");
        scanf(" %c", &aux);

    } while (aux == 's'); // Do while que nos permite iterar, siempre y cuando demos una respuesta 's' al final de cada iteracion

    //Funcion que nos permite adjuntar las demas funciones, elegir que se muestra y para no sobrecargar el main con codigo
}
/*CASOS DE USO

CASO (Condicion libre):
    paso 1: INGRESAMOS UN NUMERO CUALQUIERA DE LIBRETA, ej: 1212
    paso 2: INGRESAMOS UNA NOTA POR DEBAJO DEL 6, ej: 4
    paso 3: INGRESAMOS UNA NOTA CUALQUIERA(1-10), ej: 8
    paso 4: VERIFICAR QUE EL RESULTADO SEA "LIBRE"
    paso 5: VEREMOS EN NUMERO DE LIBRETA DEL ALUMNO, ej: 1212
    paso 6: VEREMOS LA NOTA DEL PARCIAL NUMERO 1, ej: 4
    paso 7: VEREMOS LA NOTA DEL PARCIAL NUMERO 2, ej: 8
    paso 8: INGRESAR "s" (minuscula) PARA SEGUIR VERIFICANDO CONDICIONES DE LOS ALUMNOS O "n" (minuscula) para finalizar el programa

CASO (Condicion regular)
    paso 1: INGRESAMOS UN NUMERO CUALQUIERA DE LIBRETA, ej: 6464
    paso 2: INGRESAMOS UN NUMERO ENTRE 6 Y 7, ej 6.75
    paso 3: INGRESAMOS UN NUMERO ENTRE 6 Y 7, ej 6
    paso 4: VERFICAMOS QUE DIGA "Algun/Ambos examen/es Aprobado/s"
    paso 5: VERIFICAR QUE EL RESULTADO SEA "REGULAR"
    paso 6: VEREMOS EN NUMERO DE LIBRETA DEL ALUMNO, ej: 6464
    paso 7: VEREMOS LA NOTA DEL PARCIAL NUMERO 1, ej: 6.75
    paso 8: VEREMOS LA NOTA DEL PARCIAL NUMERO 2, ej: 6
    paso 9: VERIFICAR EL PROMEDIO QUE DIO CON ESAS 2 NOTAS, ej: 6.38
    paso 10: INGRESAR "s" (minuscula) PARA SEGUIR VERIFICANDO CONDICIONES DE LOS ALUMNOS O "n" (minuscula) para finalizar el programa

CASO (Condicion promocio)
    paso 1: INGRESAMOS UN NUMERO CUALQUIERA DE LIBRETA, ej: 8080
    paso 2: INGRESAMOS UN NUMERO SUPERIOR O IGUAL A 7, ej: 8
    paso 3: INGRESAMOS UN NUMERO SUPERIOR O IGUAL A 7, eJ: 7
    paso 4: VERFICAMOS QUE DIGA "Algun/Ambos examen/es Aprobado/s"
    paso 5: VERIFICA QUE EL RESULTADO SEA "PROMOCIO"
    paso 6: VEREMOS EN NUMERO DE LIBRETA DEL ALUMNO, ej: 8080
    paso 7: VEREMOS LA NOTA DEL PARCIAL NUMERO 1, ej: 8
    paso 8: VEREMOS LA NOTA DEL PARCIAL NUMERO 2, ej: 7
    paso 9: VERIFICAR EL PROMEDIO QUE DIO CON ESAS 2 NOTAS, ej: 7.50
    paso 10: INGRESAR "s" (minuscula) PARA SEGUIR VERIFICANDO CONDICIONES DE LOS ALUMNOS O "n" (minuscula) para finalizar el programa
*/