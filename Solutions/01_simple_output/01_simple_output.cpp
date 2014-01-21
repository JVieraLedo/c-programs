#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    char frase[35];

    printf("Tu frase: ");
    scanf("%s", frase);
    gets(frase);
	
    for(int i=0; i<10; i++)
	printf("\t%s\n", frase);

    return EXIT_SUCCESS;
}
