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
	 
	printf("O valor do seno em radianos �: %fl\n", (sin(sen)));
	
	float aa = (sin(sen)) * 180/pi ;
	
	printf (" o valor de seno em graus � igual �: %fl" , aa);

}

void cosseno(){
	
	float pi = 3.14;
	int graus = 0;
	double coss = 0;
	
	printf (" escolha o valor de cosseno em radianos �");
	scanf  ( "%lf" , &coss );
	 
	printf("O valor do cosseno � %fl\n" , (cos(coss)));
	 
	float aa = (cos(coss)) * 180/pi ;
	
	printf (" o valor de cosseno em graus � igual �: %fl" , aa);

}

void tangente(){
	
	float pi = 3.14;
	int graus = 0;
	double tang = 0;
	
	printf ("escolha o valor de tangente em radianos �:");
	scanf  ( "%lf" , &tang );
	 
	printf("O valor da tangente � %fl\n",(tan(tang)));
	
	float aa = (tan(tang)) * 180/pi ;
	
	printf (" o valor de tangente em graus � igual �: %fl" , aa);
	

	 

}


int main(){
	
	int op, hip, ao, aa;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("---Escolha a opera�a� a ser realizada---\n");
	printf("[1] - seno\n");
	printf("[2] - cosseno\n");
	printf("[3] - seno\n");
	printf("[0] - Encerrar Programa\n");
	printf("---Escolha o n�mero---\n");
	scanf("%d", &op);
	
	
	
	switch (op){
			case 0:
				printf("Programa encerrado\n");
				return 0;
		
			case 1:
				printf("Fun��o escolhida: Seno\n");
				printf("---Escolha o valor do �ngulo seno ---\n");
				seno();
				return 0;
			break;
			
			case 2:
				printf("Fun��o escolhida: Cosseno");
				printf("---Escolha o valor do �ngulo cosseno ---\n");
				cosseno();
				return 0;
			break;
			
			case 3:
				printf("Fun��o escolhida: Tangente");
				printf("---Escolha o valor do �ngulo tangente ---\n");
				tangente();
				return 0;
			break;
				
	
	
	}
}
	
	
	
	

