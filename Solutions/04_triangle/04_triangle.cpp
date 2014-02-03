#include <stdio.h>
#include <stdlib.h>




int triangulo(){
    int triangulo;
    printf("Inserte dimension: ");
    scanf(" %i", &triangulo);
    printf("\n");

    for(int fila=0;fila<triangulo;fila++){
	printf("\t");
	for(int col=0;col<triangulo;col++){
	    if ( (col <= fila)){

		printf(" * ");

	    }else{
		printf("   ");
	    }
	}
	printf("\n");
    }
}


int main(int argc, char *argv[]){
    int n;

    if (argc < 2)
	return EXIT_FAILURE;

    n = atoi(argv[1]);

    triangulo();

    printf("\n\n");
    return EXIT_SUCCESS;
}
