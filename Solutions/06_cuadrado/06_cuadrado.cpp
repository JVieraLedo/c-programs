// Ejercicio dibujar un cuadrado poniendo la dimension del usuario

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int tamano, fila, col; //declaramos variables

    printf("Dimension del cuadrado: ");
    scanf(" %i", &tamano);

    //dibujamos el cuadrado, fijamos la forma con el if y el else

    for(fila=0; fila<tamano; fila++){
	for(col=0; col<tamano; col++){
	    if(fila == 0 || col == 0 || fila == (tamano - 1)
		    || col == (tamano - 1))
		printf(" * ");
	    else
		printf("   ");

	}
	printf("\n");
    }
    return EXIT_SUCCESS;
}
