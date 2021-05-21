#include <stdio.h>

	int main(){
		int i;
		int vet[]= {3,7,5,4,1,2,3,8};
		int num;
		
		printf("\n Digite um numero: ");
		scanf("%d",&num);
		
		
		for(i = 0; i < 8; i++){
			if(num == vet[i])
			{
				printf("\n Numero %d exite na posicao %d", vet[i], i+1);
	
			}	
			else{
				printf("\n Na posicao %d nao existe",i+1);
			}			
		}
		return 0;
	}
	
