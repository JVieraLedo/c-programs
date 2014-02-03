
#include<stdio.h>
#include<stdlib.h>


void print(const char *letra){

    if (*letra == "\0")
	return;
    printf("%c", *letra);
    prntf(letra + 1);
}



int main(int argc, char *argv[]){
	 
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

	printf(mes);
	printf("\n");

return EXIT_SUCCESS;
}
