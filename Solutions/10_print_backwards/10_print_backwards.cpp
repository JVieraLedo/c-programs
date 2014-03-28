#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
    const char *frase = "Este ejercicio es un mierdaaa arggggg!!!!";
    const char *inicio = frase;
    const char *final = frase;

    //desplaza el puntero 'final' hasta la ultima posicion
    while(*final != '\0')
	final ++;
    //imprime desde la ultima posicion del puntero hasta el origen
    while(final != inicio){
	final --;
	printf("%c", *final);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
