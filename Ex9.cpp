#include <stdio.h>
#include <string.h>

int main (){
	char nome[3][15] = {"Eder", "Paula", "David"};
	
	int quantA = 0, quantE = 0, i, j, tam = 0;
	
	for(i = 0; i < 3; i++){
		
		tam = strlen(nome[i]); 
		for(j = 0; j < tam ;j++){
		
			if(nome[i][j]=='a'|| nome[i][j]== 'A'){
				quantA ++;
			}
			if(nome[i][j] =='e' || nome[i][j]== 'E'){
				quantE++;
			}
	}
}
	 printf("\n Quantidade de letra A = %d \n Quantidade de letra E = %d ", quantA, quantE);
	 return 0;
}
