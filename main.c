#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float descontoInss (float salBruto);

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	float salarioBruto, valorVT, valorS, valorVR, valorPlanoSau;
	int VT, SDCT, continuo, planoSaude;
	
	
	
	do {
		
		printf(" =============================================================================\n");
		printf("||                                                                           ||\n");
		printf("||				SALARY SIMULATOR 2018 V.2                    ||\n");
		printf("||                                                                           ||\n");
		printf(" =============================================================================\n\n");
		
		printf("============================================================================\n\n");
		printf ("==> Insira o salário bruto do funcionario: R$ ");
		scanf ("%f", &salarioBruto);
		if (salarioBruto < 0) {
			printf("VALOR INVALIDO");
			break;
		}
		fflush(stdin);
		
		float salario = salarioBruto - descontoInss(salarioBruto);
		
		printf ("\n==> O funcionário possui vale transporte: ");
		printf ("	[1]- Sim     [2]- Não\n");
		scanf ("%d", &VT);
		fflush(stdin);
		
		if (VT == 1) {
			printf ("* Qual o valor do vale transporte: R$ ");
			scanf ("%f \n", &valorVT);
		} else if ( VT != 1 && VT != 2 ) {
			printf("VALOR INVÁLIDO");
			break;
		}
		
		printf ("\n==> O funcionário tem convênio com o sindicato: ");
		printf ("[1]- Sim     [2]- Não\n");
		scanf ("%d", &SDCT);
		printf("\n");
		if (SDCT == 1) {
			printf ("* Qual o valor do sindicato: R$ ");
			scanf ("%f", &valorS);
			fflush(stdin);
		} else if ( SDCT != 1 && SDCT != 2 ) {
			printf("VALOR INVÁLIDO");
			break;
		}
		
		printf("==> Plano de sáude do funcionário: [1]- Pago pela empresa  [2]- Co-participativo");
		scanf("%d", &planoSaude);
		fflush(stdin);
		if (planoSaude == 2) {
			printf("* Digite o valor a ser descontado referente ao plano co-participativo: R$ ");
			scanf("%d", &valorPlanoSau);
			printf ("\n");
		} else if ( planoSaude != 1 && planoSaude != 2 ) {
			printf("VALOR INVÁLIDO");
			break;
		}
		
		printf ("==> Qual o valor descontado do vale refeição: R$ ");
		scanf ("%d", &valorVR);
		fflush (stdin);
		
		printf ("\n==> Você deseja calcular a folha de pagamento de mais algum funcionário?\n");
		printf ("\n[1]- Sim \n[2]- Não\n");
		scanf ("%d", &continuo);
		
		if ( continuo == 1) {
			system("cls");
		}
	} while (continuo != 2);
	
	
	
	return 0;
}



float descontoInss (float salarioBruto) {
	float INSS;
	if (salarioBruto < 1693.72) {
		INSS = (salarioBruto * 8) / 100;
	}
	return INSS;
}

float descontoIr (float IR) {
	
	
	
}

float descontoFgts (float FGTS) {
	
	
	
}

float descontoTransporte (float TRANSPORTE) {
	
	
	
} 

float descontoSindicato (float SINDICATO) {
	
	
	
}


float descontoRefeicao (float REFEICAO) {
	
	
	
}
