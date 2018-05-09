#include "funciones.h"

/*
    función dijkstra:
    Entrada: estructura del nodo, nodo origen con valor int, nodo destino con valor int
    Salida: Ninguno, solo el archivo de ruteo
    Proceso: Esta función nos va a permitir ir sacando las posibles rutas que tiene un nodo origen
    al nodo destino, esto nos permite sacar la tabla de ruteo y guardarlo en el archivo ruteo.txt,
    también guardar todos los nodos para después sacar la ruta más corta
*/
void dijkstra (nodoEstructura *nodo, int nodoOrigen, int nodoDestino) {
    int i, j;
    /*Abrimos o se crea el archivo ruteo.txt para ir guardando los nodos generados */
    FILE *archivoRuteo;
    archivoRuteo=fopen("ruteo.txt","wt");
    fprintf(archivoRuteo,"\t\t\t\t%s%s%s%s%s\n","Tabla"," ","de"," ","ruteo");
    fprintf(archivoRuteo,"%s%s%s%s%s\n","NodoOrigen"," ","NodoDestino"," ","Distancia");
    char concatenaArchivoRuteo="";
    /* Tanto nodo origen y destino se les resta 'a' para tener un rango de 0 a n en valor entero*/
    nodoOrigen = nodoOrigen - 'a';
    nodoDestino = nodoDestino - 'a';
    for (i = 0; i < nodo->longitudVertices; i++) {
        verticeE *auxVerti = nodo->vertices[i];
        auxVerti->distancia = INT_MAX;
        auxVerti->nodoPrevio = 0;
        auxVerti->nodoVisitado = 0;
    }
    /* Recorre los nodos partiendo del nodo Origen */
    verticeE *auxVerti = nodo->vertices[nodoOrigen];
    auxVerti->distancia = 0;
    pilaNodoE *auxPilaNodoE = creaPila(nodo->longitudVertices); //Crea la pila de nodos dependiendo la longitud de los vertices
    //printf("---> LONG %d ---> NODO ORIGEN %d ---> DISTANCIA %d \n",auxPilaNodoE->longitudNodo,nodoOrigen, auxVerti->distancia);
    guardaPilaNodos(auxPilaNodoE, nodoOrigen, auxVerti->distancia); // Va guardando los nodos partiendo del nodo origen, destino y su distancia
    while (auxPilaNodoE->longitudNodo) { //Recorre los numeros de nodos y cuando llega su longitud se sale
        i = propPila(auxPilaNodoE);//guarda el valor del nodo
        if (i == nodoDestino) //si el valor del nodo es igual al destino, se sale
            break;
        auxVerti = nodo->vertices[i]; //sino recorre todos los nodos
        auxVerti->nodoVisitado = 1;
        for (j = 0; j < auxVerti->longitudAristas; j++) { //ahora recorremos cuantas aristas se forman
            aristaE *auxAristaE = auxVerti->aristas[j];
            verticeE *auxVerticeE = nodo->vertices[auxAristaE->vertice];
            if (!auxVerticeE->nodoVisitado && auxVerti->distancia + auxAristaE->peso <= auxVerticeE->distancia) {
                auxVerticeE->nodoPrevio = i;
                auxVerticeE->distancia = auxVerti->distancia + auxAristaE->peso;
                //printf("---> LONG %d ---> VERTICE %d ---> DISTANCIA %d \n",auxPilaNodoE->longitudNodo,auxAristaE->vertice, auxVerticeE->distancia);
        
        int desplegarLetraVertice=auxAristaE->vertice+97;
        char letraVertice=desplegarLetraVertice;
        int desplegarLetraNodoAnterior=auxVerticeE->nodoPrevio+97;
        char letraNodoAnterior=desplegarLetraNodoAnterior;
        //printf("---> LONG %d ---> VERTICE %d .--->NODO PREVIO %d ---> DISTANCIA %d \n",auxPilaNodoE->longitudNodo,auxAristaE->vertice, auxVerticeE->nodoPrevio,auxVerticeE->distancia);
        printf("\n \t \t %c \t \t %c \t \t %d \n",letraNodoAnterior,letraVertice,auxVerticeE->distancia);
        //concatenaArchivoRuteo=letraNodoAnterior+letraVertice+auxVerticeE->distancia;
        fprintf(archivoRuteo,"\t\t%c\t\t\t\t\t%c\t\t\t\t\t%d\n",letraNodoAnterior,letraVertice,auxVerticeE->distancia);
        
                guardaPilaNodos(auxPilaNodoE, auxAristaE->vertice, auxVerticeE->distancia);
            }
        }
    }
    fclose(archivoRuteo);
}
