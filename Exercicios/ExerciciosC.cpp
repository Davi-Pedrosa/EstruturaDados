#include <stdio.h>

void exercicio1(){
    int altura;
    float peso;
    char sexo;

	bool verdade = true;

	while(verdade){

    	printf("\nDigite sua altura (cm): \n");
    	scanf("%d" , &altura);
    	printf("Digite seu peso (kg): \n");
    	scanf("%f" , &peso);
    	printf("Digite seu sexo:  ");
    	scanf("%s" , &sexo);
    
    	float imc = peso / ((altura / 100.0) * (altura / 100.0)); // Convertendo altura para metros
   
   		char resultado[] = "\n Magro: >18.5\n Normal: 18.5-24.9\n Sobrepeso: 25-29.9\n Obesidade: 30>";
   
   		if(imc < 18.5){
		printf("Voce esta muito magro...\n");
   		printf("\nTabela IMC: %s\n", resultado);
   		}
   		else if(imc > 18.5 && imc < 24.9){
   		printf("Voce esta Saudavel...\n");
   		printf("\nTabela IMC: %s\n", resultado);
   		}
   		else if(imc > 25 && imc < 29.9){
   		printf("Voce esta acima do peso...\n");
   		printf("\nTabela IMC: %s\n", resultado);
   		}
   		else{
   		printf("Voce esta Obeso...\n");
   		printf("\nTabela IMC: %s\n", resultado);
   		}
	}
}

int main(){
	exercicio1();
	return 0;
}

