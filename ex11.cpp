#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char nome [6][15];
float nota1[6], nota2[6], media[6];
int i, aprovado = 0, reprovado = 0;
const int tam = 2;



void entrada(){
	
	for (i = 0; i < tam; i++){
		
	printf ("\nDigite o nome do aluno %d: ",i+1);
	scanf("%s", &nome[i]);
	
	printf("\nDigite a nota 1 do aluno %d: ",i+1);
	scanf("%f", &nota1[i]);
	
	printf("\nDigite a nota 2 do aluno %d\n: ",i+1);
	scanf("%f", &nota2[i]);
	
	
	}	 
}
void processar (){
	for(i = 0; i < tam; i++){
		media[i]= (nota1[i]+ nota2[i])/2;
		
		if(media[i]<= 5){
			reprovado++;
		}
		else{
			aprovado++;
		}
	}
	
}

void mostrar(){
	printf ("\nMedia dos alunos");
	for( i = 0; i < tam; i++){
		
		if(media[i]<= 5){
		printf("\n Aluno %s reprovado, media = %.2f",nome[i], media[i]);
		
		}
		else{	
			printf("\n Aluno %s aprovado, media = %.2f",nome[i], media[i]);
		}
	}
}

int main(){
	entrada();
	processar();
	mostrar();
	
	return 0;
}
