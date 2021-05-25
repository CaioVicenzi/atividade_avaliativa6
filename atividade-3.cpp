#include<stdio.h>
#include<locale.h>

int main(){
	char sexos[10];
	float alturas[10];
	
	// A questão falou que o programa tem um conjunto de dados, eu tomei a liberdade de popular esses dados.
	for(int i = 0; i < 10; i++)
		sexos[i] = i%2==0 ? 'm' : 'f';
	alturas[0] = 1.78;
	alturas[1] = 1.60;
	alturas[2] = 1.70;
	alturas[3] = 1.70;
	alturas[4] = 1.67;
	alturas[5] = 1.61;
	alturas[6] = 1.60;
	alturas[7] = 1.79;
	alturas[8] = 1.84;
	alturas[9] = 1.58;
	
	float maiorAltura = 0;
	float menorAltura = 1000;
	int contador = 0;
	while(contador < 10){
		if(alturas[contador] > maiorAltura) maiorAltura = alturas[contador];
		if(alturas[contador] < menorAltura) menorAltura = alturas[contador];
		contador++;
	}
	
	contador = 0;
	int quantidadeMulheres = 0;
	int quantidadeHomens = 0;
	float alturaTotalDasMulheres = 0;
	do{
		if(sexos[contador] == 'f'){
			quantidadeMulheres++;
			alturaTotalDasMulheres = alturaTotalDasMulheres + alturas[contador];
		} else quantidadeHomens++;
		contador++;
	} while(contador < 10);
	
	printf("------------- Resultado -------------\n\n");
	printf("Maior altura: %.2lf\n", maiorAltura);
	printf("Menor altura: %.2lf\n", menorAltura);
	printf("Media da altura das mulheres: %.2lf\n", alturaTotalDasMulheres/ quantidadeMulheres);
	printf("Quantidade de homens: %i\n", quantidadeHomens);
	
	
}
