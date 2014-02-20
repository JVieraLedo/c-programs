//Elevar al numero pedido los N numeros naturales.
#include <stdio.h>
#include <stdlib.h>

#define N 10//numero de numeros que se elevaran a la enesima potencia

int potencia(int base, int exponent){//funcion para elevar al numero dicho
    int resultado = base;
    if(base == 1)
	return 1;
    else{
	for(int multiplica=1; multiplica<exponent; multiplica++)
	    resultado *= base;
	return resultado;
    }
}

//meter potencia en la matriz
void fill_in(int list[N], int exponent){

    for(int rellenar=0; rellenar<N; ++rellenar)
	list[rellenar]=potencia(rellenar+1, exponent);
}

//se imprime la matriz list
void print(int list[N]){
    for(int imprimir=0; imprimir<N; imprimir++)
	printf("%i ", list[imprimir]);
    printf("\n");
}

int main(int argc, char *argv[]){
    int list[N],
	exponent;

    //comprobacion
    if(argc<2){
	fprintf(stderr, "Uso: %s <potencia>\n", argv[0]);
	return EXIT_FAILURE;
    }

    exponent = atoi(argv[1]);

    fill_in(list, exponent);
    print(list);

    return EXIT_SUCCESS;
}
