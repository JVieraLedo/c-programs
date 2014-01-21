#include<stdio.h>
#include<stdlib.h>


int main(int argc, char *argv[]){

    int numeros[NUM],
	media = 0,
	suma = 0;
    printf("Cuantos numero desea introducir: ");
    scanf("%i", &NUM);
    printf("\n");
    printf("Escriba los numeros: ");
    printf("\n");
    for( int i; i<NUM; i++){
	printf("Numero:");
	scanf("%i", &numeros[NUM]);
	suma += numeros[i]; 		    
    }
    media = (suma/MAX);

    printf("Suma: %i \n", suma);
    printf("Media: %i \n", media);

    return EXIT_SUCCESS;
}
