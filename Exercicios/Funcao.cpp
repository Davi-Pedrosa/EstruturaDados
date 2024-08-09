#include <stdio.h>



int media(int n1, int n2){
	int media = (n1 + n2)/2;
	return media;
}

int main(){
	int valor1;
	int valor2;
	int resultado;
	
	printf("Digite o primeiro valor: \n");
	scanf("%d", &valor1);
	printf("Digite um segundo valor: \n");
	scanf("%d", &valor2);
	
	resultado = media(valor1, valor2);
	
	printf("Sua media e de: %d", resultado);
	
	return resultado;
	
}
