

#include <stdio.h>



int main(){
	
	int i;
	
	char a[10] = "sala";
	char b[10] = "quarto";
	char c[10] = "banheiro";
	char comodos[2];
	
	int Lsala;
	int Lquarto;
	int Lbanheiro;
	int luza[2];
	
	int Isala;
	int Iquarto;
	int Ibanheiro;
	int Iexterno;
	int incendioa[2];
	
	int Msala;
	int Mquarto;
	int Mbanheiro;
	int movimentoa[2];
	
	int campainha;
	
	int Aext;
	int Aint;
	int portaa[2];
	
	void luz(){
		
	
		int i;
		
		while(i < 3)
		{
		for (i = 0; i < 3; i++)
		{
			if(luza[i] == 1 && movimentoa[i] == 1)
			{
				printf("Luz acessa") ;
				switch(i){
					case 0:
						printf(" da sala\n");
					break;
					case 1:
						printf(" do quarto\n");
					break;
					case 2:
						printf(" do banheiro\n");
					break;
					
				}
			}
			else
			{
				printf("Luz apagada" );
				switch(i){
					case 0:
						printf(" da sala\n");
					break;
					case 1:
						printf(" do quarto\n");
					break;
					case 2:
						printf(" do banheiro\n");
					break;
					
			}
		}
		
		}

	}
	}

	void som(){
	
		
		while(i < 3)
		{
		for (i = 0; i < 3; i++)
		{
			if(luza[i] == 1 && portaa[i] == 1)
			{
				printf("som ligado") ;
				switch(i){
					case 0:
						printf(" na sala\n");
					break;
					case 1:
						printf(" no quarto\n");
					break;
					case 2:
						printf(" no banheiro\n");
					break;
					
				}
			}
			else
			{
				printf("Som desligado" );
				switch(i){
					case 0:
						printf(" na sala\n");
					break;
					case 1:
						printf(" no quarto\n");
					break;
					case 2:
						printf(" no banheiro\n");
					break;
					
			}
		}
		
		}

	}
	}
	
	void campa(){
		if(campainha == 1)
		{
			printf("Tem alguem na porta, Secretaria eletronica funcionando");	
		}else
		{
			printf("Secretaria eletronica desligado");
		}
	}
	
	void incendio(){
	
		
		while(i < 3)
		{
		for (i = 0; i < 3; i++)
		{
			if(incendioa[i] == 1)
			{
				printf("Alerta de incêndio ") ;
				switch(i){
					case 0:
						printf(" na sala\n");
					break;
					case 1:
						printf(" no quarto\n");
					break;
					case 2:
						printf(" no banheiro\n");
					break;
					
				}
			}
			else
			{
				printf("Temperatura normal " );
				switch(i){
					case 0:
						printf(" na sala\n");
					break;
					case 1:
						printf(" no quarto\n");
					break;
					case 2:
						printf(" no banheiro\n");
					break;
					
			}
		}
		
		
		}

	}
			if(Iexterno == 1)
			{
				printf("Alerta de incêndio no Exterior");
			}else
			{
			  printf("Temperatura normal no Exterior");	
			}	
	}
	
	
	
	
	printf("seja bem vindo ao seu apartamento-automatico\n");
	printf("vamos comecar!\n");
	printf("As luzes do quarto estao acessas?\n");
	
	printf("Luz da sala? (s[1]/n[0])\n");
	scanf("%d" , &Lsala );
	luza[0] = Lsala;
	printf("Luz do quarto? (s[1]/n[0])\n");
	scanf("%d" , &Lquarto );
	luza[1] = Lquarto;
	printf("Luz do banheiro? (s[1]/n[0])\n");
	scanf("%d" , &Lbanheiro );
	luza[2] = Lbanheiro;
	
	printf("Agora os sensores de incendio\n");
	printf("O sensor de incendio da sala esta ativo? (s[1]/n[0])\n\n");
	scanf("%d" , &Isala);
	incendioa[0] = Isala;
	printf("O sensor de incendio do quarto esta ativo? (s[1]/n[0])\n\n");
	scanf("%d" , &Iquarto);
	incendioa[1] = Iquarto;
	printf("O sensor de incendio do banheiro esta ativo?\n");
	scanf("%d" , &Ibanheiro);
	incendioa[2] = Ibanheiro;
	printf("O sensor de incendio externo esta ativo?\n");
	scanf("%d" , &Iexterno);
	
	
	printf("e os dectores de presenca?\n");
	printf("o dector de presença da sala esta ativo? (s[1]/n[0])\n\n");
	scanf("%d" , &Msala);
	movimentoa[0] = Msala;
	printf("o dector de presenca da sala esta ativo? (s[1]/n[0])\n\n");
	scanf("%d" , &Mquarto);
	movimentoa[1] = Mquarto;
	printf("o dector de presenca da sala esta ativo? (s[1]/n[0])\n\n");
	scanf("%d" , &Mbanheiro);
	movimentoa[2] = Mbanheiro;
	
	printf("A campainha foi acionada?\n");
	printf("a campainha da entrada foi ativada? (s[1]/n[0])\n\n");
	scanf("%d" , &campainha);
	
	
	printf("A porta foi fechada internamente ou externamente?\n");
	printf("a porta foi fechada externamente? (s[1]/n[0])\n\n");
	scanf("%d" , &Aext);
	portaa[0] = Aint;
	printf("a porta foi fechada internamente? (s[1]/n[0])\n\n");
	scanf("%d" , &Aint);
	portaa[1] = Aint;
	portaa[2] = Aint;
	
	
	printf("luzes da casa acessa:\n");
	printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n\n");
	luz();
	printf("sons ligados na casa\n");
	printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n\n");
	som();
	printf("Secretaria eletronica\n");
	printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n\n");
	campa();
	printf("Alerta de incênio\n");
	printf("\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n\n");
	incendio();
	
	
	
	
	
	
	
	
	return 0;
	
	}
