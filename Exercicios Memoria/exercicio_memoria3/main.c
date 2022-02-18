#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int matricula;
    char sobrenome[20];
    int ano;
}registro;

int main()
{
    registro *r;
    int qtde;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qtde);
    r = (registro *) calloc(qtde, sizeof(registro));
    for(int i = 0; i < qtde; i++){
        printf("\nDigite a matricula do aluno %d: ", i);
        scanf("%d", &r[i].matricula); //&(*r).matricula+i = &r->matricula+i = r[i].matricula
        scanf("%*c");
        printf("\nDigite o sobrenome do aluno %d: ", i);
        fgets(r[i].sobrenome, 20, stdin);
        printf("\nDigite o ano de nascimento do aluno %d: ", i);
        scanf("%d", &r[i].ano);
    }

    printf("\n\n\n");

    for(int i = 0; i < qtde; i++){
        printf("Matricula do aluno %d: %d\n", i, r[i].matricula);
        printf("Sobrenome do aluno %d: %s\n", i, r[i].sobrenome);
        printf("Ano do nascimento do aluno %d: %d\n", i, r[i].ano);
        printf("-------------------\n");
    }
    return 0;
}
