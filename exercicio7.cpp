#include <stdio.h>

int main() {
    // Definindo as variáveis
    int anos, meses, dias, idadeEmDias;

    // Solicitando ao usuário para inserir a idade
    printf("Digite a idade em anos: ");
    scanf("%d", &anos);

    printf("Digite a idade em meses: ");
    scanf("%d", &meses);

    printf("Digite a idade em dias: ");
    scanf("%d", &dias);

    // Calculando a idade em dias
    idadeEmDias = (anos * 365) + (meses * 30) + dias;

    // Exibindo o resultado
    printf("A idade em dias é: %d\n", idadeEmDias);

    return 0;
}