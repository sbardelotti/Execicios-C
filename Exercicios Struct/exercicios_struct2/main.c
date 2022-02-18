#include <stdio.h>
#include <stdlib.h>
struct aluno{
    int matricula;
    char nome[20];
    float n1, n2, n3, media;
};

typedef struct aluno alunos;


int main()
{
    alunos a[5];
    alunos aux[2];
    int m;

    m = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite a matricula do aluno %d: ",i+1);
        scanf("%d",&a[i].matricula);
        printf("\nDigite o nome do aluno %d: ",i+1);
        scanf("%*c");
        gets(a[i].nome);
        printf("\nDigite a primeira nota do aluno %d: ",i+1);
        scanf("%f",&a[i].n1);
        printf("\nDigite a segunda nota do aluno %d: ",i+1);
        scanf("%f",&a[i].n2);
        printf("\nDigite a terceira nota do aluno %d: ",i+1);
        scanf("%f",&a[i].n3);
        printf("\n---------------------\n");
        a[i].media = (a[i].n1 / 3) + (a[i].n2 / 3) + (a[i].n3 / 3);
        if(a[i].n1 > m){
            m = a[i].n1;
            aux[0] = a[i];
        }
    }

    for(int i = 0; i < 5; i++){
        if(a[i].media >= 6){
            printf("\nAluno %s APROVADO com media %f", a[i].nome, a[i].media);
        }else{
            printf("\nAluno %s REPROVADO com media %f", a[i].nome, a[i].media);
        }
    }


    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 4; j++){
            if(a[j].media > a[j+1].media){
                aux[1] = a[i+j];
                a[j+1] = a[j];
                a[j] = aux[1];
            }
        }
    }

    printf("\nO aluno com a maior nota na primeira prova e: %s", aux[0].nome);
    printf("\nO aluno com a menor media e: %s", a[0].nome);
    printf("\nO aluno com a maior media e: %s", a[4].nome);



    return 0;
}
