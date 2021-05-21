#include <stdio.h>

int main(){
	int vet[11]={10,11,12,13,14,15,16,17,18,19,20};
	int i;
	
	printf ("Numeros impar do vetor :");
	
	for(i=10; i>=0; i--){
		if(vet[i]%2 !=0){
		printf("%d ", vet[i]);
		}

	}
	
	return 0;
}
