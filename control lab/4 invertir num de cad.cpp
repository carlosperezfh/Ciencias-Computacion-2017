#include <iostream>
#include <string.h>
#define MAXINPUT 100

using namespace std;
int getline_(char cadget[], int maxinput);
int any(char cad1[], char cad2[]);


int main(){
    char c1[]="Hola,";
    char c2[]="\t Voy a terminar mis tareas! \n";
    char c3[]="\t Cerrare el facebook y Whatsapp \n";
    char c4[]="Bye \n";
    char unir[80];
    int i,j,k,h;

   	for(i=0;c4[i]!='\0';i++)
        unir[i]=c4[i];
	for(j=0;c3[j]!='\0';j++,i++)
		unir[i]=c3[j];
	for(h=0;c2[h]!='\0';i++,h++)
		unir[i]=c2[h];
	for(k=0;c1[k]!='\0';i++,k++)
		unir[i]=c1[k];

	unir[i]='\0';
	cout<< unir << endl;
	return 0;
}
/*	cout << "escriba una frase: " << endl;

    while((lenc1=getline_(unir, MAXINPUT))>0, lenc2=(getline_(c4, MAXINPUT))>0){
		static int encontro = any(unir, c4);
        cout << encontro << endl;
        if ((encontro>=0) && (encontro<=30)){
           	//printf("la posicion de la cadena 2 en la cadena 1 es el indice : %d\n\n ",encontro);
           	unir2
    	}
     	if (encontro==-1) //printf("la segunda cadena, NO esta en la primera cadena: \n");
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
*/
