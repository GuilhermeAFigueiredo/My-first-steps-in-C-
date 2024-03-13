#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FUNCIONARIOS 100

struct Funcionario {
    char nome[50];
    int idade;
    float salario;
};

void cadastrarFuncionario(struct Funcionario funcionarios[], int *numFuncionarios) {
    if (*numFuncionarios >= MAX_FUNCIONARIOS) {
        printf("Limite de funcionarios atingido.\n");
        return;
    }

    printf("Nome do funcionario: ");
    scanf("%s", funcionarios[*numFuncionarios].nome);
    
    printf("Idade do funcionario: ");
    scanf("%d", &funcionarios[*numFuncionarios].idade);
    
    printf("Salario do funcionario: ");
    scanf("%f", &funcionarios[*numFuncionarios].salario);

    (*numFuncionarios)++;
    printf("Funcionario cadastrado com sucesso.\n");
}

void listarFuncionarios(struct Funcionario funcionarios[], int numFuncionarios) {
    if (numFuncionarios == 0) {
        printf("Nenhum funcionario cadastrado.\n");
        return;
    }

    printf("Listagem de funcionarios:\n");
    for (int i = 0; i < numFuncionarios; i++) {
        printf("Funcionario %d:\n", i + 1);
        printf("Nome: %s\n", funcionarios[i].nome);
        printf("Idade: %d\n", funcionarios[i].idade);
        printf("Salario: %.2f\n", funcionarios[i].salario);
        printf("\n");
    }
}

int main() {
    struct Funcionario funcionarios[MAX_FUNCIONARIOS];
    int numFuncionarios = 0;
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Cadastrar funcionario\n");
        printf("2. Listar funcionarios\n");
        printf("3. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarFuncionario(funcionarios, &numFuncionarios);
                break;
            case 2:
                listarFuncionarios(funcionarios, numFuncionarios);
                break;
            case 3:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 3);

    return 0;
}
