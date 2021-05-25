#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int voto;
	int votosTotais = 0;
	int votosPele;
	int votosMaradona;
	int votosBranco;
	int votosAnulado;
	char confirma;
	char acabou;
	
	printf("-------------------------------------------\n");
	printf("===> Melhor jogador de todos os tempos <===\n");
	printf("-------------------------------------------\n\n");
	while(true){
		printf("______________________\n");
		printf("eleitor nº%i\n", votosTotais+1);
		printf("Digite o seu voto: \n");
		printf("|=> ");
		scanf("%i", &voto);
		fflush(stdin);
		
		switch(voto){
			case 25: printf("Voto para o Pelé"); break;
			case 33: printf("Voto para o Maradona"); break;
			case 0: printf("Voto em branco"); break;
			default: printf("Voto anulado"); break;
		}
		
		printf("\n\nConfirma seu voto? ('S'-> sim, 'N'-> não): ");
		scanf("%c", &confirma);
		fflush(stdin);
		if(confirma == 'S'){
			switch(voto){
				case 25: votosPele++; break;
				case 33: votosMaradona++; break;
				case 0: votosBranco++; break;
				default: votosAnulado++; break;
			} 
		} else continue;
		
		votosTotais++;
		printf("Acabou a eleição? (S -> sim, qualquer outro-> não): ");
		scanf("%c", &acabou);
		if(acabou == 'S') break;
	}
	system("CLS");
	printf("---------- Resultado -------------\n\n");
	printf("Votos do Pelé: %i\n",votosPele);
	printf("Votos do Maradona: %i\n", votosMaradona);
	printf("Votos em branco: %i\n", votosBranco);
	printf("Votos anulados: %i\n", votosAnulado);
	if(votosMaradona != votosPele){
		printf("E o vencedor é: ");
		if(votosMaradona > votosPele) printf("Maradona");
			else printf("Pelé");
	} else printf("O resultado é: empate!");
}
// Escreva um programa que transforme o computador em uma urna 
// eletrônica para eleição do melhor jogador de futebol de todos os tempos.
// O número 25 é do candidato Pelé e o 33 do candidato Maradona. 
// Cada voto será efetivado pelo número do candidato, permitindo-se ainda o voto 0 (em branco) e 
// qualquer outro voto diferente dos especificados será considerado nulo. 
// O eleitor deverá sempre ser consultado quanto a confirmação do voto. 
// Ao final da eleição deverá ser apresentado um relatório contendo: 
// • Quantidade de votos de cada candidato; 
// • Quantidade de votos em branco e nulos; 
// • Nome do candidato vencedor (prever possibilidade de empate).
