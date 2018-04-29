#include "funcionesGenerales.h"

void topologia()
{

  FILE *topologia;
  int valida=0;
  DATOS *inicio, *auxiliar, *nodo;
  inicio=NULL;


  system("clear");
  printf("\t\t\tRealizado por: Diana Laura Aviles Elizalde\n\n");
  printf("lee topoligia archivo\n");

 topologia=fopen("topologia.txt","rt");

//Validar si existe el archivo
if(topologia==NULL)
{
valida=2;
validationError(valida);
getchar();
}


  getchar();
  getchar();
}
