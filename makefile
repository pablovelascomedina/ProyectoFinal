default: Dijkstra.o funcionesGenerales.o 	Topologia.o Ruteo.o Direccionamiento.o
	gcc Dijkstra.o funcionesGenerales.o Topologia.o Ruteo.o Direccionamiento.o -o Dijkstra -lm
Dijkstra.o:Dijkstra.c
	gcc -c Dijkstra.c
funcionesGenerales.o:funcionesGenerales.c
		gcc -c funcionesGenerales.c
Topologia.o: Topologia.c
		gcc -c Topologia.c
Ruteo.o:Ruteo.c
		gcc -c Ruteo.c

todo:
	gcc Dijkstra.c funcionesGenerales.c Topologia.c Ruteo.c Direccionamiento.c -o Dijkstra
clear:
	rm*.o
