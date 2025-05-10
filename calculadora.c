#include <stdio.h>

int main() {
    double num1, num2, resultado;
    int opcao;

    do {
        printf("Escolha uma opcao:\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Multiplicacao\n");
        printf("4. Divisao\n");
        printf("5. Sair\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%lf", &num1);
            printf("Digite o segundo numero: ");
            scanf("%lf", &num2);
        }

        switch (opcao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado: %.2lf\n", resultado);
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2lf\n", resultado);
            } else {
                printf("Erro: Divisao por zero!\n");
            }
            break;
        case 5:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida! Tente novamente.\n");
        }
        printf("\n");
    } while (opcao != 5);

    return 0;
}