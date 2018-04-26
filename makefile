default: Dijkstra.o
	gcc Dijkstra.o -o Dijkstra -lm
Dijkstra.o:Dijkstra.c
	gcc -c Dijkstra.c

todo:
	gcc Dijkstra.c -o Dijkstra
clear:
	rm*.o
