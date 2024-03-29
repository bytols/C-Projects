#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

	struct comida{
		int peso;
		int bebida;
		float preco;
	};
	
	float array[100];
	float arraymensal[30];
	int dia = 0;
	
	
	void diarias(comida){
	
				float valor_do_prato;
				
				int x;
				int iterador_do_array = 0;
				
				while(dia < 30 ){
				
					printf("resultado das vendas diarias\n");
					
					
					
					for (x = 0; x < 100; x++){
						
					
						int rpeso = rand() % 3000;
						int rbebida = rand() % 4;
						struct comida x;
						
						x.peso = rpeso;
						x.bebida = rbebida;
						valor_do_prato = 20.50 + 2 * x.bebida;
						x.preco = valor_do_prato;
						array[iterador_do_array] = x.preco;
						iterador_do_array++;
			
						//printf("%d\n", x.peso);
						//printf("%d\n", x.bebida);
						//printf("%5.2f\n", x.preco);
						//printf("proximo peso\n");
				
					}
						int i;
						float sum;
					for(i = 0; i<100; i++){
						sum = sum + array[i];
						//printf("a soma do array é %d\n", sum);
					}
					
					arraymensal[dia] = sum;
					dia++;
					
					printf("a soma dos valores é %5.2f\n", sum);
					printf("o gasto do dia tal foi %5.2f\n" , arraymensal[4]);
					//printf("%5.2f\n" , array[0]);
					//printf("%5.2f\n" , array[1]);
					//printf("%5.2f\n" , array[2]);
					//printf("%5.2f\n" , array[3]);
			


				}
				
	}
	
	diarias();
}

