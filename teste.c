#include <stdio.h>

int main() {
    float num1, num2, resultado;
    char operadores;

    printf("Insira um operador\n");
    scanf(" %c", &operadores);  // Adicionei um espaço antes de %c para consumir qualquer caractere em branco residual

    // Consumir o caractere de nova linha
    while (getchar() != '\n');

    printf("Insira dois numeros\n");
    scanf("%f %f", &num1, &num2);

    switch (operadores) {
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Erro: divisao por zero\n");
                return 1;
            }
            break;
        default:
            printf("Insira um operador valido\n");
            return 1;
    }

    printf("Seu resultado e: %f\n", resultado);

    return 0;
}
