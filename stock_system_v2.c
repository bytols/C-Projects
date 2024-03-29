#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    int codigo[5], i, cod_cliente = 1, cod_prod, quant_prod, j, ia, sub;
    int estoque[5];
    setlocale(LC_ALL, "Portuguese");
    
    	// apresentação do sistema
        printf("< Bem Vindo ao Sistema de Estoque Omega! >\n\n");
        printf("Faça o cadastro dos produtos abaixo:\n\n");
    	
    	
    	
    	// preenchimento dos 2 arrays 
        for(i=0; i<=4; i++)
        {
            printf("Digite o código do produto:");
                scanf("%d", &codigo[i]);
            printf("Digite a quantidade do produto em estoque:");
                scanf("%d", &estoque[i]);
            printf("\n<Produto registrado no sistema!>\n\n");
        }
        
        // apresentação gráfica dos valores contidos nos arrays
        printf("Veja os produtos cadastrados abaixo: \n");
        for(i=0;i<=4;i++)
        {
        printf("Produto [%d] tem [%d] unidades em estoque. \n", codigo[i], estoque[i]);
        }
    
    
    	//definição do código do cliente ( caso for 0, o programa será encerrado)
    	printf("\n< Pedido do Cliente! >");
	    printf("\n\nDigite abaixo o código do cliente, ou digite o número (0) para finalizar o programa");
	    printf("\n\nCódigo do Cliente: ");
	    scanf("%d", &cod_cliente);
	            
	            
	    // loop das vendas       
    	while (cod_cliente != 0){
		
	            
			         
	
	        // else if, para avaliar as quantidades a serem retiradas dos códigos selecionados
	        printf("\nDigite o código do produto da sua escolha e a quantidade que deseja adquirir!");
	        printf("\n\nCódigo do Produto:\n\n");
	                scanf("%d", &cod_prod);
	           printf("Quantidade: \n\n");
	                scanf("%d", &quant_prod);
	                
	   		if (cod_prod == codigo[0])   {
	   				if (quant_prod > estoque[0]){
					   
	   					printf("-----Estoque indisponivel-----\n\n");
	   				}else {
	   					printf("-----quantidade disponivel-----\n");
	   					sub = estoque[0] - quant_prod;
	   					estoque[0] = sub;
			   		}
			   }else if	(cod_prod == codigo[1])	{
		        	if (quant_prod > estoque[1]){
		   					printf("-----Estoque indisponivel-----\n\n");
		   			}else{
		   				printf("-----quantidade disponivel-----\n");
		   				sub = estoque[1] - quant_prod;
						estoque[1] = sub;
					}
		        
				}else if	(cod_prod == codigo[2])	{
		        	if (quant_prod > estoque[2]){
		   					printf("-----Estoque indisponivel-----\n\n");
		   			}else{
		   				printf("-----quantidade disponivel-----\n");
		   				sub = estoque[2] - quant_prod;
		   				estoque[2] = sub;
		   			}
				
				}else if	(cod_prod == codigo[3])	{
		        	if (quant_prod > estoque[3]){
		   					printf("-----Estoque indisponivel-----\n\n");
		   			}else{ 
		   				printf("-----quantidade disponivel-----\n");
		   				sub = estoque[3] - quant_prod;
		   				estoque[3] = sub;
					}
				}else if (cod_prod == codigo[4]) {
		        	if (quant_prod > estoque[4]){
		   				printf("-----Estoque indisponivel-----\n\n");
		   			}else{
		   				printf("-----quantidade disponivel-----\n");
		   				sub = estoque[4] - quant_prod;
		   				estoque[4] = sub;
		   			}
				
				}else {
		        printf("/////[código invalido]/////\n\n");
		        printf("/////[Programa encerrado]/////\n\n");
				}
				
				// apresentação atualizada dos valores contidos nos arrays
				printf("Veja os produtos cadastrados abaixo: \n");
	        for(i=0;i<=4;i++)
	        {
	        
			printf("Produto [%d] tem [%d] unidades em estoque. \n", codigo[i], estoque[i]);
	        }
			
			printf("\n\nCódigo do Cliente: ");
	    	scanf("%d", &cod_cliente);

	}
		
	    
    return 0;
}
