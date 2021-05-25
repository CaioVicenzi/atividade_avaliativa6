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
	
	printf("Digite a quantidade de crianças que nasceram nesse período: ");
	scanf("%i", &quantidadeCriancasNascidas);
	fflush(stdin);
	
	while(true){
		printf("\n\n----------- %iª criança-----------\n\n", quantidadeCriancasMortas + 1);
		printf("Digite o sexo da crinça que morreu: ");
		scanf("%c", &sexo);
		fflush(stdin);
		if(sexo != 'v'){
			printf("Digite a idade (em meses) que a criança morreu: ");
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
	printf("\n\nA porcentagem de crianças mortas nesse período é %.2lf%%\n", porcentagemCriancasMortas);
	printf("A porcentagem de crianças mortas do sexo masculino são: %.2lf%% do total de crianças mortas\n", porcentagemCriancasMortasMasculinas);
	printf("A porcentagem de crinaças mortas maiores de 24 meses de idade são %.2lf%% do total de crianças mortas");
	
}
