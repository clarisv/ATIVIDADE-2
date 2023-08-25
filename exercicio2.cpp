#include <stdio.h>

int main() {
    float numero;

    // Solicita o número
    printf("Digite um número: ");
    scanf("%f", &numero);

    // Calcula o dobro
    float dobro = numero * 2;

    // Exibe o dobro
    printf("O dobro de %.2f é %.2f\n", numero, dobro);

    return 0; // Retorna 0 para indicar sucesso
}