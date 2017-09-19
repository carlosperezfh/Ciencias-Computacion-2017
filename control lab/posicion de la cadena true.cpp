//Escriba la funcion any(s1,s2,) que regresa la primera posicion de la cadena s1 en donde
//se encuentre cualquier caracter de la cadena s2 o -1 si no contiene caracteres de
//s2(la funcion de biblioteca standar strpbrk hace el mismo trabajo pero regresa un apuntador a la posicion encontrada)

#include <stdio.h>
#include <stdlib.h>
#define MAXINPUT 100

int any(char cad1[], char cad2[]);
int getline_(char cadget[], int maxinput);

int main()
{
    char cad1[MAXINPUT],cad2[MAXINPUT];
    int lenc1,lenc2,encontro;

	printf("escriba una frase: \n");
    while((lenc1=getline_(cad1, MAXINPUT))>0,
          lenc2 = (getline_(cad2, MAXINPUT))>0)
    {
        printf("escribe otra frase : \n");
		encontro = any(cad1, cad2);
        printf("%d\n", encontro);
        if ((encontro>=0) && (encontro<=30)){
           	printf("la posicion de la cadena 2 en la cadena 1 es el indice : %d\n\n ",encontro);
    	}
     	if (encontro==-1)
            printf("la segunda cadena, NO esta en la primera cadena: \n");
    }
    return 0;
}

int getline_(char cadget[], int maxinput){
    int i, c;

    for(i=0; i<maxinput-1 && (c = getchar()) != EOF && c!= '\n'; ++i)
        cadget[i] = c;
    if(c == '\n'){
        cadget[i] = c;
        ++i;
    }
    cadget[i] = '\0';
    return i;
}



int any(char cad1[], char cad2[]){
    int char1;
    int i, j;

    for(i = 0; cad1[i] != '\n'; ++i){
        for(j = 0; cad2[j] != '\n'; ++j){
            if(cad1[i] == cad2[j]){
				return i;
        	}
        }
    }
    return -1;
}
