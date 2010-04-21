#include <stdio.h>
main()
{
	int hE, mE, hS, mS;
	float TE, TS, TF;
	printf("Por favor digite respectivamente a hora e os minutos em que voce deixou seu carro dentro de nosso estabelecimento\n\n");
A:
B:
	scanf("%i",&hE);
	if (hE < 0){
		printf("Por favor digite um horario valido Sr. Usuario\n\n");
		goto B;
	}
	if (hE > 24){
		printf("Por favor digite um horario valido Sr. Usuario\n\n");
		goto B;
	}
	scanf("%i",&mE);
	if (mE < 0){
		printf("Por favor digite um valor correto de minutos Sr. Usuario\n\n");
		goto B;
	}
	if (mE > 59){
		printf("Por favor digite um valor correto de minutos Sr. Usuario\n\n");
		goto B;
	}
	TE=(hE*60)+mE;
	printf("Por favor digite respectivamente a hora e os minutos em que voce retirou o carro de nosso estabelecimento\n\n");
C:
	scanf("%i",&hS);
	if (hS < 0){
		printf("Por favor digite um horario valido Sr. Usuario\n\n");
		goto C;
	}
	if (hS > 24){
		printf("Por favor digite um horario valido Sr. Usuario\n\n");
		goto C;
	}
D:
	scanf("%i",&mS);
	if (mS < 0){
		printf("Por favor digite um valor correto de minutos Sr. Usuario\n\n");
		goto D;
	}
	if (mS > 59){
		printf("Por favor digite um valor correto de minutos Sr. Usuario\n\n");
		goto D;
	}
	TS=(hS*60)+mS;
	if (TE > TS){
		printf("Desculpeme Sr. usuario mas houve um engano no horario de entrada e saida, por favor poderia repetir essas informacoes\n\n");
		goto A;}
	TF=(TS-TE)/10;
	printf("Sr usuario, voce devera pagar pelo nosso servico um valor igual a R$%f\n\n",TF);
}