#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int valorDigitado;
	int fatorial = 1;
	
	printf("Digite o fatorial a ser calculado: ");
	scanf("%i", &valorDigitado);
	while(valorDigitado > 0){ 
		fatorial = fatorial * valorDigitado; 
		valorDigitado--; 
	}
	printf("\nFatorial do número digitado: %i", fatorial);
}
