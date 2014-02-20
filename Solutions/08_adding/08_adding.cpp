#include <stdio.h>
#include <stdlib.h>

void imprimir_error(char *argv[]){
    fprintf(stderr, "Uso: %s <numero> \n", argv[0]);
    exit(EXIT_FAILURE);
}


double add(double numero[]){//funcion double

}

int main(int argc, char *argv[]){
    double numero[argc-1];

    if(argc<2)
imprimir_error(argv);

    //introduce valores metidos por el usuario en el array
    
    for(int dato_introducido=0; dato_introducido<argc-1; dato_introducido++)
numero[dato_introducido] = atof(argv[dato_introducido+1]);

    add(numero);

    return EXIT_SUCCESS;
}
