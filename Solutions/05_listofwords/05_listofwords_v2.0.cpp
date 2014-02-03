//Este programa imprime la cantidad de palabras que hay en una lista.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    //declaro las variables
    int dimension;
    const char *mes[] = {
	"Enero",
	"Febrero",
	"Marzo", 
	"Abril", 
	"Mayo", 
	"Junio", 
	"Julio", 
	"Agosto", 
	"Septiembre", 
	"Octubre", 
	"Noviembre", 
	"Diciembre"
    };
    //como ver la dimension de la lista
    dimension = sizeof(mes);
    dimension /= 8;
    //Imprimir la cantidad y el numero de palabras
    printf("Numero de palabras %i\n", dimension);
    for(int imprimir=0; imprimir<dimension; imprimir++)
	printf("%s\n", mes[imprimir]);

    return EXIT_SUCCESS;
}
