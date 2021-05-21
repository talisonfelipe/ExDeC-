#include <stdio.h>



int main (){
//	Atribuindo valor para os vetores
	int vetor1[] ={4,8,10,12,4};
	int vetor2[] ={3,5,7,9,11};
	int i;
	int cont;
	int soma[5];
	
	
	printf("\n Os numeros  do primeiro vetor eh: ");
	
	for(cont = 0; cont < 5; cont++){
		
		printf(" %d",vetor1[cont]);
	
	
		for(i = 0; i < 5; i++){
			
			if(cont == i){
			
			soma[i] = vetor1[cont]+ vetor2[i]; 
			}
		}
		
	}
	printf("\n Os numero do segundo vetor eh: ");
	
	for(i=0; i<5; i++){
		printf(" %d",vetor2[i]);
		
	}
			
	printf ("\n A soma dos numeros que pertence a mesma posicao eh = "); 
	for(i=0; i<5; i++){
		printf(" %d ",soma[i]);
		
		
	}
	
	
	
	return 0;
}
