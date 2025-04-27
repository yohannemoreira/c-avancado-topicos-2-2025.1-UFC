#include <stdio.h>
#include "soma.h"
#include "subtracao.h"
#include "multiplicacao.h"
#include "divisao.h"

int main() {
    int a, b, escolha;
    float resultado;

    printf("=== Calculadora ===\n");
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    
    printf("\nEscolha a operacao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Opcao: ");
    scanf("%d", &escolha);
    
    switch (escolha) {
        case 1:
            resultado = soma(a, b);
            printf("\nResultado da soma: %.2f\n", resultado);
            break;
        case 2:
            resultado = subtracao(a, b);
            printf("\nResultado da subtracao: %.2f\n", resultado);
            break;
        case 3:
            resultado = multiplicacao(a, b);
            printf("\nResultado da multiplicacao: %.2f\n", resultado);
            break;
        case 4:
            if (b == 0) {
                printf("\nErro: Divisao por zero!\n");
            } else {
                resultado = divisao(a, b);
                printf("\nResultado da divisao: %.2f\n", resultado);
            }
            break;
        default:
            printf("\nOpção invalida!\n");
    }
    
    return 0;
}