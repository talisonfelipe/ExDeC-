#include <stdio.h>
#include <string.h>

char nome[3][15];
int i,j, totalA = 0,totalE = 0, tam=0 ;

void entrada(){
	printf("Digite tres nomes: ");
	
	for(i = 0; i < 3; i++){
		scanf("%s",&nome[i]);
	}
}

void processar(){
	for(i = 0; i <3; i++){
		tam = strlen(nome[i]);
		
		for( j = 0; j < tam; j++){
			if(nome[i][j]=='a'|| nome[i][j]=='A'){
				totalA++;
			}
			if(nome[i][j]=='e'|| nome[i][j]=='E'){
				totalE++;
			}
		}
	}
}

void mostrar(){ 
	
	printf("\n Total de letra A = %d \n Total de letra E = %d ", totalA, totalE);
	
}

int main (){
	entrada();
	processar();
	mostrar();
	
	return 0;
}
