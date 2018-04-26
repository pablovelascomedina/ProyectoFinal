default: topologia.o funciones.o
	gcc topologia.o funcionesTopologia.o -o Dijkstra -lm
topologia.o:topologia.c
	gcc -c topologia.c
funciones.o:funcionesTopologia.c
	gcc -c funcionesTopologia.c
todo:
	gcc topologia.c funcionesTopologia.c -o Dijkstra
clear:
	rm*.o
