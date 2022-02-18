#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int qtde_alunos;
    char serie[3];
} turmas;

int main()
{
    int sel, chave;
    float media;
    chave = 1;
    media = 0;
    sel = 0;
    FILE *f;

    f = fopen("arq.txt","w");
    if(f == NULL){
        printf("Erro na abertura \n");
        exit(1);
    }

    turmas *turma = (turmas *) malloc(chave*sizeof(turmas));
    char ***nome_alunos = (char ***) malloc(chave*sizeof(char));//[turma][aluno][char]
    int ***nota_alunos = (int ***) malloc(chave*sizeof(int));
    printf("Programa de Arquivamento de Turmas em Arquivo\n");
    do{
        printf("\n---------------------");
        printf("\nDefinir Turma - 1");
        printf("\nCadastrar Alunos e Notas - 2");   //selecionar em determinada turma //so pode selecionar se tiver alguma turma
        printf("\nExibir Alunos e Media - 3");
        printf("\nExibir Alunos Aprovados - 4");
        printf("\nExibir Alunos Reprovados - 5");
        printf("\nSalvar no Arquivo - 6");
        printf("\nSair - 7\n\n");

        scanf("%d", &sel);
            switch(sel){
                case 1:
                    turma = realloc(turma, chave*sizeof(turmas));
                    nome_alunos = realloc(nome_alunos, chave*sizeof(char));
                    nota_alunos = realloc(nota_alunos, chave*sizeof(int));
                    printf("\nDigite a quantidade de alunos na turma: ");
                    scanf("%d", &turma[chave-1].qtde_alunos);
                    nome_alunos[chave-1] = (char **) malloc(turma[chave-1].qtde_alunos);
                    nota_alunos[chave-1] = (int **) malloc(turma[chave-1].qtde_alunos*sizeof(int));
                    printf("\nDigite a serie da turma (9A): ");
                    scanf("%s", turma[chave-1].serie);
                    chave++;
                    break;
                case 2:
                    if(chave == 1){
                        printf("\nCrie uma turma primeiro");
                        break;
                    }
                    printf("\nSelecione a turma: ");
                    for(int i = 0; i < chave-1; i++){
                        printf("\n%d - Turma %s\n\n", i, turma[i].serie);
                    }
                    scanf("%d", &sel);
                    if(sel < 0 || sel > chave){
                        printf("\nSala invalida");
                        break;
                    }
                    for(int j = 0; j < turma[sel].qtde_alunos; j++){
                        nome_alunos[sel][j] = (char *) malloc(30*sizeof(char));
                        nota_alunos[sel][j] = (int *) malloc(4*sizeof(int)); //4 notas
                        for(int k = 0; k < 30; k++){
                            nome_alunos[sel][j][k] = ' ';
                        }
                        nome_alunos[sel][j][30] = '\0';
                        printf("\nDigite o nome do aluno %d: ", j);
                        scanf("%*c");
                        fgets(nome_alunos[sel][j], 30, stdin);
                        for(int no = 0; no < 4; no++){
                            printf("\nDigite a nota %d do aluno %d: ", no+1, j);
                            scanf("%d", &nota_alunos[sel][j][no]);
                        }
                    }
                    break;
                case 3:
                    if(chave == 1){
                        printf("\nCrie uma turma primeiro");
                        break;
                    }
                    printf("\nSelecione a turma: ");
                    for(int i = 0; i < chave-1; i++){
                        printf("\n%d - Turma %s\n", i, turma[i].serie);
                    }
                    scanf("%d", &sel);
                    if(sel < 0 || sel > chave){
                        printf("\nSala invalida");
                        break;
                    }
                    for(int j = 0; j < turma[sel].qtde_alunos; j++){
                        for(int no = 0; no < 4; no++){
                            media += (float) nota_alunos[sel][j][no]/4;
                        }
                        printf("\nAluno: %sMedia: %f", nome_alunos[sel][j], media);
                        media = 0;
                    }
                    break;
                case 4:
                    if(chave == 1){
                        printf("\nCrie uma turma primeiro");
                        break;
                    }
                    printf("\nSelecione a turma: ");
                    for(int i = 0; i < chave-1; i++){
                        printf("\n%d - Turma %s\n\n", i, turma[i].serie);
                    }
                    scanf("%d", &sel);
                    if(sel < 0 || sel > chave){
                        printf("\nSala invalida");
                        break;
                    }
                    for(int j = 0; j < turma[sel].qtde_alunos; j++){
                        for(int no = 0; no < 4; no++){
                            media += (float) nota_alunos[sel][j][no]/4;
                        }
                        if(media>=6){
                            printf("\nAluno: %sMedia: %f", nome_alunos[sel][j], media);
                        }
                        media = 0;
                    }
                    break;
                case 5:
                    if(chave == 1){
                        printf("\nCrie uma turma primeiro");
                        break;
                    }
                    printf("\nSelecione a turma: ");
                    for(int i = 0; i < chave-1; i++){
                        printf("\n%d - Turma %s\n\n", i, turma[i].serie);
                    }
                    scanf("%d", &sel);
                    if(sel < 0 || sel > chave){
                        printf("\nSala invalida");
                        break;
                    }
                    for(int j = 0; j < turma[sel].qtde_alunos; j++){
                        for(int no = 0; no < 4; no++){
                            media += (float) nota_alunos[sel][j][no]/4;
                        }
                        if(media<6){
                            printf("\nAluno: %sMedia: %f", nome_alunos[sel][j], media);
                        }
                        media = 0;
                    }
                    break;
                case 6:
                    for(int i = 0; i<chave-1; i++){
                        fprintf(f,"Turma %s -- Quantidade de aluos na turma: %d\n",turma[i].serie, turma[i].qtde_alunos);
                        for(int j = 0; j < turma[i].qtde_alunos; j++){
                            fprintf(f,"%d° Aluno: %s",j+1,nome_alunos[i][j]);
                            for(int no = 0; no < 4; no++){
                                fprintf(f,"N%d: %d ",no+1, nota_alunos[i][j][no]);
                                media += (float) nota_alunos[i][j][no]/4;
                            }
                            fprintf(f,"\nMedia: %f\n",media);
                            media = 0;
                        }
                    }
                    break;
                default:
                    if(sel != 7)
                        printf("\nOpcao invalida");
                    break;
            }
    }while(sel != 7);

    fclose(f);
    return 0;
}
