#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>

void seno(){
	
	double sen = 0;
	float pi = 3.14;
	int graus = 0;
	
	
	printf (" escolha o valor de seno");
	scanf  ( "%lf" , &sen );
	 
	printf("O valor do seno em radianos é: %fl\n", (sin(sen)));
	
	float aa = (sin(sen)) * 180/pi ;
	
	printf (" o valor de seno em graus é igual à: %fl" , aa);

}

void cosseno(){
	
	float pi = 3.14;
	int graus = 0;
	double coss = 0;
	
	printf (" escolha o valor de cosseno em radianos é");
	scanf  ( "%lf" , &coss );
	 
	printf("O valor do cosseno é %fl\n" , (cos(coss)));
	 
	float aa = (cos(coss)) * 180/pi ;
	
	printf (" o valor de cosseno em graus é igual à: %fl" , aa);

}

void tangente(){
	
	float pi = 3.14;
	int graus = 0;
	double tang = 0;
	
	printf ("escolha o valor de tangente em radianos é:");
	scanf  ( "%lf" , &tang );
	 
	printf("O valor da tangente é %fl\n",(tan(tang)));
	
	float aa = (tan(tang)) * 180/pi ;
	
	printf (" o valor de tangente em graus é igual à: %fl" , aa);
	

	 

}


int main(){
	
	int op, hip, ao, aa;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("---Escolha a operaçaõ a ser realizada---\n");
	printf("[1] - seno\n");
	printf("[2] - cosseno\n");
	printf("[3] - seno\n");
	printf("[0] - Encerrar Programa\n");
	printf("---Escolha o número---\n");
	scanf("%d", &op);
	
	
	
	switch (op){
			case 0:
				printf("Programa encerrado\n");
				return 0;
		
			case 1:
				printf("Função escolhida: Seno\n");
				printf("---Escolha o valor do ângulo seno ---\n");
				seno();
				return 0;
			break;
			
			case 2:
				printf("Função escolhida: Cosseno");
				printf("---Escolha o valor do ângulo cosseno ---\n");
				cosseno();
				return 0;
			break;
			
			case 3:
				printf("Função escolhida: Tangente");
				printf("---Escolha o valor do ângulo tangente ---\n");
				tangente();
				return 0;
			break;
				
	
	
	}
}
	
	
	
	

