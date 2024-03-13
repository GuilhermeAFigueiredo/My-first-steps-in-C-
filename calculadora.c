#include <stdio.h>

int main() {
    char operador; 
    double num1, num2, resultado;

    // Solicita ao usuário que insira o operador e dois números
    printf("Digite um operador (+, -, *, /): ");
    scanf("%c", &operador);

    printf("Digite dois números: "); 
    scanf("%lf %lf", &num1, &num2);

    // Realiza a operação com base no operador fornecido
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
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
                printf("Erro: Divisão por zero!\n");
                return 1; // Retorna 1 para indicar um erro
            }
            break;
        default:
            printf("Operador inválido!\n");
            return 1; // Retorna 1 para indicar um erro
    }

    // Exibe o resultado da operação
    printf("Resultado: %.2lf\n", resultado);

    return 0;
}
