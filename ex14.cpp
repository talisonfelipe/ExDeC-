#include <stdio.h>


int main(){
	int num[5], numCubo[5],i;
	
	for(i=0; i<5 ; i++){
		printf("\n Digite o numero %d ",i+1);
		scanf("%d",&num[i]);
		numCubo[i] = num[i]*num[i]*num[i];
	}
	printf("\n Os numeros eh: ");
	
	for(i=0; i<5 ; i++){
			printf(" %d",num[i]);
	}
	printf("\n Os numeros ao cubo eh: ");
	for(i=0 ;i<5; i++){
		printf(" %d",numCubo[i]);
	}
	return 0;
}
