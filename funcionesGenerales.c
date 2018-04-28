#include "funcionesGenerales.h"

void menuHelp()
{
  system("clear");
  printf("\n\t\t\t\t\t\t\t A Y U D A \n");
  printf("\t\t\t\t\t\t----------------------\n\n");
  printf("\t Este programa \n");

  printf("\t\t   E S P E C I F I C A C I O N E S\n");
  printf("\t\t---------------------------------------\n");
  printf("\n\t\t   1- Ingresar la Base de datos a utilizar\n");
  printf("\n\t\t   2- Ingresar la funcion que desea realizar\n");
  printf("\n\n\t       EN CASO DE INGRESAR OTROS VALORES DARA ERROR\n\n");
  printf("\t\t E J E M P L O : -- ./practica2 ic16dae -h \n\n\n");
  printf("\t\t DONDE LAS OPCIONES PARA EL ARGUMENTO 2 SON:\n");
  printf("\t\t -i   Inserta datos en la Base de datos\n");
  printf("\t\t -c  Consulta los Querys en la Base de datos\n");
  printf("\t\t -e   Elimina datos en la Base de datos\n" );
  printf("\n\t\tby @autor: Diana Laura Aviles ELizalde  :D\n\n");
  getchar();

}



int validationError(int valida)
{
  switch (valida)
  {
    case 1:
      system("clear"); //validacion de argumentos
      printf("\n\n\tIngreso mal su opcion,intentelo de nuevo\n");
    break;

  default://algo hiciste mal.
    printf("MAL\n");
  }
}
