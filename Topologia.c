#include "funcionesGenerales.h"


void topologia()
{

  FILE *topologia;
  int valida=0;
  char renglon[200];
  char or[255];
  char de[255];
  int costo;
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
  else
    {
      //leer renglon por renglon
      while (fgets(renglon,maxNumCaracToRead,topologia)!=NULL)
	{
	  //Guardar datos del renglo origen:Destino:Costo
	  if(sscanf(renglon,"%s:%s:%d",or,de,&costo)==3) //valida que ten
	    {
	      nodo=malloc(sizeof(DATOS));
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
	      nodo->origen=(char*)malloc(strlen(or));
	      strcpy(nodo->origen,or);
	      printf("%s\n",nodo->origen);
	      nodo->destino=(char*)malloc(strlen(de));
	      strcpy(nodo->destino,de);
	      printf("%s\n",nodo->destino);
	      nodo->costo=costo;
	      printf("%d\n",nodo->costo);

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
