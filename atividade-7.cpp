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
		printf("eleitor n�%i\n", votosTotais+1);
		printf("Digite o seu voto: \n");
		printf("|=> ");
		scanf("%i", &voto);
		fflush(stdin);
		
		switch(voto){
			case 25: printf("Voto para o Pel�"); break;
			case 33: printf("Voto para o Maradona"); break;
			case 0: printf("Voto em branco"); break;
			default: printf("Voto anulado"); break;
		}
		
		printf("\n\nConfirma seu voto? ('S'-> sim, 'N'-> n�o): ");
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
		printf("Acabou a elei��o? (S -> sim, qualquer outro-> n�o): ");
		scanf("%c", &acabou);
		if(acabou == 'S') break;
	}
	system("CLS");
	printf("---------- Resultado -------------\n\n");
	printf("Votos do Pel�: %i\n",votosPele);
	printf("Votos do Maradona: %i\n", votosMaradona);
	printf("Votos em branco: %i\n", votosBranco);
	printf("Votos anulados: %i\n", votosAnulado);
	if(votosMaradona != votosPele){
		printf("E o vencedor �: ");
		if(votosMaradona > votosPele) printf("Maradona");
			else printf("Pel�");
	} else printf("O resultado �: empate!");
}
// Escreva um programa que transforme o computador em uma urna 
// eletr�nica para elei��o do melhor jogador de futebol de todos os tempos.
// O n�mero 25 � do candidato Pel� e o 33 do candidato Maradona. 
// Cada voto ser� efetivado pelo n�mero do candidato, permitindo-se ainda o voto 0 (em branco) e 
// qualquer outro voto diferente dos especificados ser� considerado nulo. 
// O eleitor dever� sempre ser consultado quanto a confirma��o do voto. 
// Ao final da elei��o dever� ser apresentado um relat�rio contendo: 
// � Quantidade de votos de cada candidato; 
// � Quantidade de votos em branco e nulos; 
// � Nome do candidato vencedor (prever possibilidade de empate).
