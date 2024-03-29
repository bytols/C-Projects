#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>


void seno(){
	
	double sen = 0;
	
	printf (" escolha o valor de seno");
	scanf  ( "%lf" , &sen );
	 
	printf("%fl",(sin(sen)));
	 

}

void cosseno(){
	
	double coss = 0;
	
	printf (" escolha o valor de cosseno");
	scanf  ( "%lf" , &cos );
	 
	printf("%fl",(cos(coss)));
	 

}

void tangente(){
	
	double tang = 0;
	
	printf (" escolha o valor de tangente");
	scanf  ( "%lf" , &tang );
	 
	printf("%fl",(tan(tang)));
	 

}


int main(){
	
	int op, hip, ao, aa;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("---Escolha a operaçaõ a ser realizada---\n");
	printf("[1] - seno\n");
	printf("[2] - cosseno\n");
	printf("[3] - seno\n");
	printf("---Escolha o número---\n");
	scanf("%d", &op);
	
	printf("---Escolha o valor da ângulo oposto---\n");
	
	
	switch (op){
			case 1:
				printf("Função escolhida: Seno");
				printf("Escolha o valor do ângulo oposto\n");
				scanf("%d", &ao );
				printf("Escolha o valor da hipotenusa\n");
				scanf("%d", &hip );
			break;
			
			case 2:
				printf("Função escolhida: Cosseno");
				printf("Escolha o valor do ângulo adjacente\n");
				scanf("%d", &aa );
				printf("Escolha o valor da hipotenusa\n");
				scanf("%d", &hip );
			break;
			
			case 3:
				printf("Função escolhida: Tangente");
				printf("Escolha o valor do ângulo oposto\n");
				scanf("%d", &ao );
				printf("Escolha o valor do ângulo adjacente\n");
				scanf("%d", &aa );
			break;
				
	
	
	}
	
	
	
	
	
}

	
