#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int quantidadeCriancasNascidas;
	int quantidadeCriancasMortas = 0;
	int criancasMasculinasMortas = 0;
	char sexo;
	int idadeEmMeses;
	int criancasMortasMaioresVinteEQuatroMeses = 0;
	
	printf("Digite a quantidade de crian�as que nasceram nesse per�odo: ");
	scanf("%i", &quantidadeCriancasNascidas);
	fflush(stdin);
	
	while(true){
		printf("\n\n----------- %i� crian�a-----------\n\n", quantidadeCriancasMortas + 1);
		printf("Digite o sexo da crin�a que morreu: ");
		scanf("%c", &sexo);
		fflush(stdin);
		if(sexo != 'v'){
			printf("Digite a idade (em meses) que a crian�a morreu: ");
			scanf("%i", &idadeEmMeses);
			fflush(stdin);
			quantidadeCriancasMortas++;
			if(sexo =='m') criancasMasculinasMortas++;
			if(idadeEmMeses > 24) criancasMortasMaioresVinteEQuatroMeses++;
		} else break;
	}
	
	float porcentagemCriancasMortasMasculinas = (100 * criancasMasculinasMortas) / quantidadeCriancasMortas;
	float porcentagemCriancasMortas = (100 * quantidadeCriancasMortas) /quantidadeCriancasNascidas;
	float porcentagemCriancasMortasMaiores24Meses = (100 * criancasMortasMaioresVinteEQuatroMeses) / quantidadeCriancasMortas; 
	printf("\n\n-------resultado---------");
	printf("\n\nA porcentagem de crian�as mortas nesse per�odo � %.2lf%%\n", porcentagemCriancasMortas);
	printf("A porcentagem de crian�as mortas do sexo masculino s�o: %.2lf%% do total de crian�as mortas\n", porcentagemCriancasMortasMasculinas);
	printf("A porcentagem de crina�as mortas maiores de 24 meses de idade s�o %.2lf%% do total de crian�as mortas");
	
}
