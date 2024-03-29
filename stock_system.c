#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    int codigo[5], estoque[5], i, cod_cliente, cod_prod, quant_prod;
    setlocale(LC_ALL, "Portuguese");
    
    
        printf("< Bem Vindo ao Sistema de Estoque Omega! >\n\n");
        printf("Faça o cadastro dos produtos abaixo:\n\n");
    
        for(i=0; i<=4; i++)
        {
            printf("Digite o código do produto:");
                scanf("%d", &codigo[i]);
            printf("Digite a quantidade do produto em estoque:");
                scanf("%d", &estoque[i]);
            printf("\n<Produto registrado no sistema!>\n\n");
        }
            printf("< Veja os produtos cadastrados abaixo: >");
            
            for ( i = 0; i < (sizeof(codigo) / sizeof(codigo[0])); i++); {
				printf("%d\n" , codigo[i]);
			}
			for ( i = 0; i < (sizeof(estoque) / sizeof(estoque[0])); i++); {
				printf("%d\n" , estoque[i]);
			}
            
            
            
            printf("\n< Pedido do Cliente! >");
            printf("\n\nDigite abaixo o código do cliente, ou digite o número (0) para finalizar o programa");
            printf("\n\nCódigo do Cliente: ");
                scanf("%d", &cod_cliente);
                
        if(cod_cliente==0)
        {
            printf("Programa Finalizado!!");
        }  
        
           printf("\nDigite o código do produto da sua escolha e a quantidade que deseja adquirir!");
           printf("\n\nCódigo do Produto:\n");
                scanf("%d", &cod_prod);
           printf("Quantidade: ");
                scanf("%d", &quant_prod);
                
        
        
            

    return 0;
}
