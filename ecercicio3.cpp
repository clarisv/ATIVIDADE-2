#include <stdio.h>

int main() {
    float comprimento, largura;

    // Solicita as medidas da sala
    printf("Digite o comprimento da sala em metros: ");
    scanf("%f", &comprimento);

    printf("Digite a largura da sala em metros: ");
    scanf("%f", &largura);

    // Calcula a área da sala
    float area = comprimento * largura;

    // Exibe a área da sala
    printf("A área da sala é %.2f metros quadrados.\n", area);

    return 0; // Retorna 0 para indicar sucesso
}