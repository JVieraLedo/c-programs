#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[]){
    int cantidad;
    int numeros[cantidad],
	media = 0,
	suma = 0;
    printf("Cuantos numero desea introducir: ");
    scanf("%i", &cantidad);
    printf("\n");
    printf("Escriba los numeros: ");
    printf("\n");
    for( int i; i<cantidad; i++){
	printf("Numero:");
	scanf("%i", &numeros[cantidad]);
	suma += numeros[i]; 		    
    }
    media = (suma/cantidad);

    printf("Suma: %i \n", suma);
    printf("Media: %i \n", media);

    return EXIT_SUCCESS;
}
