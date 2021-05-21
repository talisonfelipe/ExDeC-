#include <stdio.h>

int main(){
	int soma=0, somaMaior = 0, maior=0, i;
	int vet[] = {4,10,18,20,29,40,34,28};
	int maiorTrinta [8];
	
	
	printf("\n Os numeros do vetor sao");
	for(i=0; i<8; i++){
		somaMaior= vet[i]+somaMaior;
		printf("- %d",vet[i]);
	}
	printf("\n A soma deles = %d ", somaMaior);
	
	printf("\n Os n numeros maior que trinta =  " );
	
	for(i = 0; i < 8; i++){
		if(vet[i] > 30){
			maior = maior+ 1;
			maiorTrinta[i]= vet[i];
			soma = maiorTrinta[i] + soma;
			
			printf(" %-d ", maiorTrinta[i]);
			
			
		
	}
	
	}
	printf("\n A soma deles = %d ",soma);
	printf("\n A soma dos dois vetores = %d ",somaMaior+soma);
	
		
	return 0;
	
}

