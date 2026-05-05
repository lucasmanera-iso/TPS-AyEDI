#include <stdio.h>
#include <string.h>

double parcial1;
double parcial2;
int nroLibreta;

void consultarDatos();
char* calcularCondicion(double p1, double p2);

int main()
{
    char aux = 's';
    char condicion[15];

    do
    {
        consultarDatos();
        
        strcpy(condicion, calcularCondicion(parcial1, parcial2));

        printf("Condicion: %s\n", condicion);

        printf("Quiere seguir evaluando condiciones? (s/n)\n");
        scanf(" %c", &aux);

    } while (aux == 's');

    return 0;
}

void consultarDatos(){
    printf("Ingrese el numero de la libreta\n");
    scanf("%d",&nroLibreta);   

    printf("Ingrese la nota del primer parcial\n");
    scanf("%lf",&parcial1);

    printf("Ingrese la nota del segundo parcial\n");
    scanf("%lf",&parcial2);
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
}