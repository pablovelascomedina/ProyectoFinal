default: Dijkstra.o funcionesGenerales.o 	Topologia.o
	gcc Dijkstra.o funcionesGenerales.o Topologia.o -o Dijkstra -lm
Dijkstra.o:Dijkstra.c
	gcc -c Dijkstra.c
funcionesGenerales.o:funcionesGenerales.c
		gcc -c funcionesGenerales.c
Topologia.o: Topologia.c
		gcc -c Topologia.c

todo:
	gcc Dijkstra.c funcionesGenerales.c Topologia.c -o Dijkstra
clear:
	rm*.o
