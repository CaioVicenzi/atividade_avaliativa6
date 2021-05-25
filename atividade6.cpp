#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char numero[30];
	printf("Digite um número inteiro positivo: ");
	fgets(numero, 30, stdin);
	
	int contagem = sizeof numero;

	
	printf("O número digitado tem %s digitos.", contagem);	
	
}
