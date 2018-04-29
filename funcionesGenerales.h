#include <stdio.h>
#include<stdlib.h>
#include<string.h>

/*Estructura para leer el archivo de topologia.txt*/
typedef struct topologiatxt{
    char origen;
    char destino;
    int costo;
    struct topologiatxt *siguiente;
}DATOS;

//Menu de Ayuda
void menuHelp();

 //imprime los errores
int validationError(int valida);

/*funciones topología*/
void topologia();

/*funciones ruteo*/
void ruteo();

/*funciones  direccionamiento*/
void direccionamiento();
