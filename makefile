default: Dijkstra.o funcionesGenerales.o
	gcc Dijkstra.o funcionesGenerales.o -o Dijkstra -lm
Dijkstra.o:Dijkstra.c
	gcc -c Dijkstra.c
funcionesGenerales.o:funcionesGenerales.c
		gcc -c funcionesGenerales.c

todo:
	gcc Dijkstra.c funcionesGenerales.c -o Dijkstra
clear:
	rm*.o
