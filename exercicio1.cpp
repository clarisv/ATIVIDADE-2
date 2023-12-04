#include <stdio.h>

int main() {

    float num1, num2;

    printf("digite o primeiro número: ");
    scanf("%f", &num1);

    printf("digite o segundo número: ");
    scanf("%f", &num2);

    float soma = num1 + num2;
    float subtracao = num1 - num2;
    float multiplicacao = num1 * num2;

    float divisao;
    if (num2 != 0) {
        divisao = num1 / num2;
    } else {
        printf("não é possível dividir por zero.\n");
        return 1; 
    }

    printf("soma: %.2f\n", soma);
    printf("subtração: %.2f\n", subtracao);
    printf("multiplicação: %.2f\n", multiplicacao);
    printf("divisão: %.2f\n", divisao);

    return 0; 

