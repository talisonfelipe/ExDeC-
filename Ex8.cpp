#include <stdio.h>

int main(){
	int vetor[] = {4,7,9,6,72,17,25,40};
	int quantmultiplo = 0;
	int i, entre30 = 0, maior = 0;
	float media, soma = 0 ; 
	printf("Numeros do vetor :");
	for( i = 0; i < 8 ; i++){
		printf(" %d",vetor[i]);
		soma = vetor[i]+soma;
		if(vetor[i]> maior){
			maior = vetor[i];
		}
		if(vetor[i] %5 ==0){
			quantmultiplo++;
		}
		if(vetor[i]>10 && vetor[i]<30){
			entre30++;
			
		}
		
	}
	media = soma/8;
	printf("\nA media do vetor = %.1f", media);
	printf("\nExiste %d numeros multiplos de 5",quantmultiplo);
	printf("\nEntre 10 e 30 existe %d numeros ",entre30);
	printf("\n O maior numero desse vetor eh: %d ",maior);
	
	return 0;
	
}
