// Disciplina  : [Bases de Programação]
// Professor   : Rogerio Mandelli
// Descrição   : Calculadora de idade em 2040
// Autor(a)    : Nome do(a) aluno(a)

#include <stdio.h>
int main()

{
	int ida_atu, ano_nas, ano_atu, ida_2040, i_futuro;
	printf("CALCULO DE IDADE EM 2040 \n \n");
	printf("Digite seu ano de nacimento: ");
    	scanf("%d",&ano_nas);
	printf("Digite o ano atual: ");
    	scanf("%d",&ano_atu);
    ida_atu = ano_atu - ano_nas; 
	ida_2040 = 2040 -ano_nas;
	printf("Sua idade em 2040 sera de %d anos",ida_2040);
}
