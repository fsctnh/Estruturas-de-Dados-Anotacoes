#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura
typedef struct {
    char nome[50];
    int matricula;
    float nota_final;
} Aluno;

int main() {
    int N;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &N);

    // Alocação dinâmica do vetor de alunos
    Aluno *alunos = (Aluno *) malloc(N * sizeof(Aluno));
    if (alunos == NULL) {
        printf("Erro de alocação de memória!\n");
        return 1;
    }

    // Leitura dos dados
    for (int i = 0; i < N; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Nome: ");
        scanf(" %49[^\n]", alunos[i].nome);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nota final: ");
        scanf("%f", &alunos[i].nota_final);
    }

    // Exibição dos alunos aprovados
    printf("\n--- Alunos Aprovados ---\n");
    for (int i = 0; i < N; i++) {
        if (alunos[i].nota_final >= 5.0) {
            printf("Nome: %s | Matrícula: %d | Nota: %.2f\n",
                   alunos[i].nome, alunos[i].matricula, alunos[i].nota_final);
        }
    }

    // Liberação da memória
    free(alunos);

    return 0;
}
