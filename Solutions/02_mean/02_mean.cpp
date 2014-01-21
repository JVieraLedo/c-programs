#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int main(int argc, char *argv[]){

    int numeros[MAX],
	media = 0,
	suma = 0;

    printf("Escriba los numeros: ");

    for( int i; i<MAX; i++){
	printf("Numero:");
	scanf("%i", &numeros[MAX]);
	suma += numeros[i]; 		    
    }
    media = (suma/MAX);

    printf("Suma: %i \n", suma);
    printf("Media: %i \n", media);

    return EXIT_SUCCESS;
}
