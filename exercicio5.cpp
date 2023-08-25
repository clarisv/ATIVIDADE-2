#include <stdio.h>

int main() {
    // Definindo as variáveis
    float custoMercadoria, valorFrete, despesasEventuais, valorVenda, lucro;
    
    // Solicitando ao usuário para inserir os valores
    printf("Digite o custo da mercadoria: ");
    scanf("%f", &custoMercadoria);
    
    printf("Digite o valor do frete: ");
    scanf("%f", &valorFrete);
    
    printf("Digite o valor das despesas eventuais: ");
    scanf("%f", &despesasEventuais);
    
    printf("Digite o valor de venda: ");
    scanf("%f", &valorVenda);
    
    // Calculando o lucro e a percentagem de lucro
    float custoTotal = custoMercadoria + valorFrete + despesasEventuais;
    lucro = valorVenda - custoTotal;
    float percentagemLucro = (lucro / custoTotal) * 100;
    
    // Exibindo os resultados
    printf("Custo Total: %.2f\n", custoTotal);
    printf("Lucro: %.2f\n", lucro);
    printf("Percentagem de Lucro: %.2f%%\n", percentagemLucro);

    return 0;
}