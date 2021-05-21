#include <stdio.h>
#include <string.h>



int main(){
	char nome [3][20];
	int i;
	
	printf ("digite tres nomes: ");
	
	
	for( i = 0; i < 3; i++){
	 scanf ("%s",&nome[i]);
	}
	printf("\n Os nome que voce digitou eh: ");
	for(i=0;  i<3; i++){
		printf(" , %s",nome[i]);
	}
	
	
	
	
	
	return 0;
}
