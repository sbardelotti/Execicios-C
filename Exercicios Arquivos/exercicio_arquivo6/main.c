#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    int q, n;
    f = fopen("arq.txt", "w");
    if(f == NULL){
        printf("Erro na abertura \n");
        exit(1);
    }
    printf("Digite o numero de alunos: ");
    scanf("%d", &q);
    char **nome = (char **) malloc(q);
    int *nota = (int *) malloc(q*sizeof(int));
    for(int i = 0; i < q; i++){
        nome[i] = (char *) malloc(40*sizeof(char));
        for(int j = 0; j < 40; j++){
            nome[i][j] = ' ';
        }
        printf("\nDigite o nome do aluno %d: ", i);
        scanf("%*c");
        fgets(nome[i], 40, stdin);
        printf("\nDigite a nota do aluno %d: ", i);
        scanf("%d", &n);
        nota[i] = n;

        fprintf(f, "%s%d\n", nome[i], nota[i]);
    }

    fclose(f);
    return 0;
}
