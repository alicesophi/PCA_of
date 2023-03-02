#include <stdio.h>
#include <string.h>

#define EQUIPE_1 6
#define EQUIPE_2 6

void acrescenta_ponto_alunas(char nomes_alunos[][50], char sexo_alunos[], float notas_alunos[], int tamanho_equipe);
void adiciona_aluno(char nomes_alunos[][50], char sexo_alunos[], float notas_alunos[], int tamanho_equipe);

int main() {
    // Matriz para armazenar os nomes dos alunos
    char nomes_alunos[2][6][50] = {
        {"Maria", "Luana", "Ana", "Jose", "Pedro", "Sara"}, // Equipe 1
        {"Luiza", "Lucas", "Fernanda", "Carlos", "Livia", "Ricardo"} // Equipe 2
    };
    char sexo_alunos[2][6] = {
        {'F', 'F', 'F', 'M', 'M', 'F'}, // Equipe 1
        {'F', 'M', 'F', 'M', 'F', 'M'} // Equipe 2
    };
    float notas_alunos[2][6] = {
        {8.5, 9.0, 7.0, 6.5, 7.5, 8.0}, // Equipe 1
        {9.5, 8.0, 6.5, 7.0, 8.5, 9.0} // Equipe 2
    };

    int i, j, qtd_mulheres_equipe_1 = 0, qtd_mulheres_equipe_2 = 0, num_alunas_selecionadas = 0;
    char alunas_selecionadas[12][50];
    

    // Percorre a matriz sexo_alunos contando a quantidade de mulheres em cada equipe
    for (i = 0; i < EQUIPE_1; i++) {
        if (sexo_alunos[0][i] == 'F') {
            qtd_mulheres_equipe_1++;
        }
    }

    for (i = 0; i < EQUIPE_2; i++) {
        if (sexo_alunos[1][i] == 'F') {
            qtd_mulheres_equipe_2++;
        }
    }

    // Compara a quantidade de mulheres em cada equipe e imprime o resultado
    if (qtd_mulheres_equipe_1 > qtd_mulheres_equipe_2) {
        printf("A equipe 1 tem mais mulheres.\n");
    } 
	else if (qtd_mulheres_equipe_1 < qtd_mulheres_equipe_2) {
        printf("A equipe 2 tem mais mulheres.\n");
    } 
	else {
        printf("As equipes tem a mesma quantidade de mulheres.\n");
    }

	//Selecionar as alunas para o projeto
	 for (i = 0; i < 2; i++) {
        for (j = 0; j < 6; j++) {
            if (sexo_alunos[i][j] == 'F' && notas_alunos[i][j] >= 8.0) {
                strcpy(alunas_selecionadas[num_alunas_selecionadas], nomes_alunos[i][j]);
                num_alunas_selecionadas++;
            }
        }
    }
    
    printf("Alunas selecionadas:\n");
    for (i = 0; i < num_alunas_selecionadas; i++) {
        printf("%s\n", alunas_selecionadas[i]);
    }
    
    //acrescentar o ponto:
    acrescenta_ponto_alunas(nomes_alunos[1], sexo_alunos[1], notas_alunos[1], EQUIPE_2);
    
    printf("Notas atualizadas da equipe 2:\n");
    for (i = 0; i < EQUIPE_2; i++) {
        printf("%s: %.1f\n", nomes_alunos[1][i], notas_alunos[1][i]);
    }
    
    adiciona_aluno(nomes_alunos, sexo_alunos, notas_alunos, tamanho_equipe);
    
    return 0;
}

void acrescenta_ponto_alunas(char nomes_alunos[][50], char sexo_alunos[], float notas_alunos[], int tamanho_equipe) {
	int i;
    for (i = 0; i < tamanho_equipe; i++) {
        if (sexo_alunos[i] == 'F') {
            notas_alunos[i] += 1.0;
        }
    }
}

void adiciona_aluno(char nomes_alunos[][50], char sexo_alunos[], float notas_alunos[], int tamanho_equipe) {
    int i;
    for (i = 0; i < tamanho_equipe; i++) {
        if (notas_alunos[i] == 0) {
            printf("Digite o nome do aluno: ");
            scanf("%s", nomes_alunos[i]);
            printf("Digite o sexo do aluno (M ou F): ");
            scanf(" %c", &sexo_alunos[i]);
            printf("Digite a nota do aluno: ");
            scanf("%f", &notas_alunos[i]);
            
        }
    }
    if (i == tamanho_equipe) {
        printf("A equipe está cheia. Não é possível adicionar um novo aluno.\n");
    }
}

