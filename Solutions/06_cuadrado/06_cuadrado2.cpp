//Dibuja un cuadrado con las dimensiones que proporcione el usuario en la linea de la consola

#include <stdio.h>
#include <stdlib.h>


void comprueba(int argc, char *argv[]){
    if(argc<2){
	fprintf(stderr, "Uso: %s <lado_del_cuadrado>\n", argv[1]);
	exit(EXIT_FAILURE);
    }
}

//funcion para imprimir el cuadrado
void imprimir(int dimension){

    int fila, columna;
    //con dos bucles se imprimen las filas y las columnas
    for(fila=0; fila<dimension; fila++){
	for(columna=0; columna<dimension; ++columna)

	    //condicion para imprimir el cuadrado
	    if(fila == 0 || col == 0 || fila == (tamano - 1)
		    || col == (tamano - 1))
		printf("*");
	    else
		printf(" ");
	printf("\n");

    }
}

//programa principal
int main(int argc, char *argv[]){
    int dimension;

    comprueba(argc, argv);

    altura = atoi(argv[1]);

    imprimir(dimension);

    return EXIT_SUCCESS;
}
