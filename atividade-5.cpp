#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float precoIngresso = 15;
	int ingressosVendidos = 120;
	float despezas = 600;
	float lucro;
	
	printf("+---------+----------------------+------------+---------+\n");
	printf("|  Preço  |  Ingressos vendidos  |  Despezas  |  Lucro  |\n");
	printf("+---------+----------------------+------------+---------+\n");
	for(precoIngresso; precoIngresso > 0; precoIngresso = precoIngresso - 3){
		lucro = (precoIngresso * ingressosVendidos) - despezas;
		printf("|%7.2lf  |%22i|  %10.2lf|  %7.2lf|\n", precoIngresso, ingressosVendidos, despezas, lucro);	
		ingressosVendidos = ingressosVendidos + 26;
	}
	printf("+---------+----------------------+------------+---------+\n");
}
