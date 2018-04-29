#include "funcionesGenerales.h"


void topologia()
{
struct topologiatxt datos;
  FILE *topologia;
  int valida=0;
  char renglon[200];

   datos *inicio, *auxiliar, *nodo;
  inicio=NULL;


  system("clear");
  printf("\t\t\tRealizado por: Diana Laura Aviles Elizalde.\n\n");
  printf("lee topoligia archivo\n");

 topologia=fopen("topologia.txt","rt");


//Validar si existe el archivo
if(topologia==NULL)
{
valida=2;
validationError(valida);
getchar();
}
else
{
  //leer renglon por renglon
  while (fgets(renglon,maxNumCaracToRead,topologia)!=NULL)
   {
     //Guardar datos del renglo origen:Destino:Costo
     if(sscanf(renglon,"%c:%c:%d",&datos.origen,&datos.destino,&datos.costo)==3)
     {
       nodo=malloc(sizeof(datos));
       if(nodo==NULL)
       {
         valida=3;
         validationError(valida);
         //limpiamos el nodo
         if (inicio == NULL)
         {
             nodo = inicio;
        while (nodo != NULL)
          {
            inicio = nodo->siguiente;
            free(nodo);
            nodo = inicio;
          exit(0);
          }
         }
    }
    nodo->datos.origen=datos.origen;
    nodo->datos.destino=datos.destino;
    nodo->datos.costo=datos.costo;
    nodo->siguiente=NULL;

    if (inicio == NULL)
    {
      inicio=nodo;
    }
    else
    {
      auxiliar->siguiente=nodo;
    }
    auxiliar=nodo;
     }
  }
  fclose(topologia);
}

  getchar();
  getchar();
}
