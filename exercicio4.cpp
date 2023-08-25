#include <stdio.h>

int main() {
    // Definindo as variáveis para armazenar os valores
    float valorEmReais, valorDoDolar, valorEmDolares;

    // Solicitando ao usuário para inserir o valor em reais e o valor do dólar
    printf("Digite o valor em reais: ");
    scanf("%f", &valorEmReais);

    printf("Digite o valor do dólar: ");
    scanf("%f", &valorDoDolar);

    // Convertendo o valor para dólares
    valorEmDolares = valorEmReais / valorDoDolar;

    // Exibindo o resultado
    printf("O valor em dólares é: %.2f\n", valorEmDolares);

    return 0;
}