#include "funcionesGenerales.h"

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
