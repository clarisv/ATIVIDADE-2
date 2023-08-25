#include <stdio.h>

int main() {
    float num1, num2;

    // Solicita os dois números
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Realiza as operações
    float soma = num1 + num2;
    float subtracao = num1 - num2;
    float multiplicacao = num1 * num2;
    
    // Verifica se o segundo número é diferente de zero antes da divisão
    float divisao;
    if (num2 != 0) {
        divisao = num1 / num2;
    } else {
        printf("Não é possível dividir por zero.\n");
        return 1; // Retorna um código de erro
    }

    // Exibe os resultados
    printf("Soma: %.2f\n", soma);
    printf("Subtração: %.2f\n", subtracao);
    printf("Multiplicação: %.2f\n", multiplicacao);
    printf("Divisão: %.2f\n", divisao);

    return 0; // Retorna 0 para indicar sucesso
}
