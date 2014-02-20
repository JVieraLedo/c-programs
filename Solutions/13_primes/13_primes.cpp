//imprime los 80 primeros primos
#include <stdio.h>
#include <stdlib.h>

#define MAX 80


int main(int argc, char *argv[]){

    int primo[MAX],
	primo_encontrado,
	posible_primo;
    bool primo_no_encontrado = true;

    //en 2 empieza el primer primo
    primo[0] = 2;
    primo_encontrado = 1;
    posible_primo = 3;

    //while hasta conseguir los MAX primos
    while(primo_encontrado != MAX){
	//for para comparar los primos y acceder a la funcion bool del programa aceptando que es un primo
	for(int numeros=0; numeros<primo_encontrado; numeros++)
	    if( posible_primo % primo[numeros] == 0){
		primo_no_encontrado = false;
		break;
	    }

	//secuencia boleana para encontrar los primos del bucle for        
	if(primo_no_encontrado == true){
	    primo_encontrado ++;
	    primo[primo_encontrado-1] = posible_primo;
	}

	primo_no_encontrado = true;
	posible_primo ++;
    }

    //saca por pantalla los primos
    for(int imprimir=0; imprimir<MAX; imprimir++)
	printf("%i ", primo[imprimir]);
    printf("\n");

    return EXIT_SUCCESS;
}
