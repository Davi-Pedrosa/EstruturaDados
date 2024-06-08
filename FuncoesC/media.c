// programa para media de um aluno
#include <stdio.h>

float media() {
    float n1, n2, n3, media;
    printf("Entre com a nota 1: ");
    scanf("%f", &n1);
    printf("Entre com a nota 2: ");
    scanf("%f", &n2);
    printf("Entre com a nota 3: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / 3;
    printf("Media: %f\n", media);
    return media;
}

int main() {
    float resultado;
    resultado = media();
    printf("O resultado final é de: %f\n", resultado);
    return 0;
}
