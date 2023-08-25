#include <stdio.h>

int main() {
    // Definindo as variáveis
    float salarioAtual, percentualReajuste, novoSalario;

    // Solicitando ao usuário para inserir o salário atual e o percentual de reajuste
    printf("Digite o salário atual: ");
    scanf("%f", &salarioAtual);

    printf("Digite o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);

    // Calculando o novo salário
    novoSalario = salarioAtual + (salarioAtual * percentualReajuste / 100);

    // Exibindo o resultado
    printf("O novo salário é: %.2f\n", novoSalario);

    return 0;
}