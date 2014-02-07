

#include <stdio.h>
#include <stdlib.h>

void fallo_numeros(char *argv[]){
    fprintf(stderr, "Uso: %s <numero> <numero>\n", argv[0]);
    exit(EXIT_FAILURE);
}


double add(double op1, double op2){
 return op1 + op2;
}

int main(int argc, char *argv[]){
    double num1,
	   num2;

    	if(argc<3)
	fallo_numeros(argv);

    num1 = atof(argv[1]);
    num2 = atof(argv[2]);

    printf("%.2lf\n", add(num1, num2));

    return EXIT_SUCCESS;
}
