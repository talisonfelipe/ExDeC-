#include <stdio.h>


int main(){
	int vet[10];
	int vet1[10];
	int aux = 0;
	int i;	
	
//	Passando valor para o vetor
	for (i = 0; i < 10; i++){
		vet[i] = aux+2;
		aux = aux+2;
	}
	aux = 9;
//	Pasando valor para o vetor
	
	for (i = 0; i < 10; i++){
		vet1[i] = aux +1;
		aux++; 
	}
//	Somando os vetores e mostrando na tela 
	int soma = vet[i]+ vet1[i];
	printf ("\n A soma dos vetores eh: %d",soma);
	
	return 0;
}
