#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int valor;
	int constante = 2000;
	printf("Digite um valor de 1 a 2000: ");
	scanf("%i", &valor);
	
	if(valor > constante) printf("%i: limite de cálculo excedido...", valor);
	else{
		printf("\n\nValores entre %i e %i:\n", valor, constante);
		// Aumentei um no valor digitado para que o programa mostre os números entre os digitado e 2000 e não mostre o 
		// número digitado.
		valor++;
		for(valor; valor<constante; valor++)
			if(valor % 2 == 0) printf("-> %i\n", valor);
	}
}
