#include <stdio.h>
#include <stdlib.h>

int main()
{
    int max, sel, cont, boo;
    char **p, proc[30];

    max = sel = cont = boo = 0;

    printf("Numero maximo de nomes: ");
    scanf("%d", &max);

    p = (char **) malloc(max*sizeof(char));

    for(int i = 0; i < max; i++){
        p[i] = (char *) malloc(30*sizeof(char));
        for(int j = 0; j < 30; j++){
            p[i][j] = '-';
            proc[j] = '-';
        }
    }

    printf("\n\n\n");

    do{
        printf("\n-------------------------");
        printf("\nGravar nome - 1");
        printf("\nApagar por linha - 2");
        printf("\nApagar por nome - 3");
        printf("\nAlterar nome - 4");
        printf("\nMostrar nome em determinada linha - 5");
        printf("\nSair - 6\n");
        printf("\nSelecione uma opcao: ");
        scanf("%d", &sel);

        switch(sel){
            case 1:
                printf("\nInforme a linha a ser gravado(0-%d): ", max-1);
                scanf("%d", &sel);
                if(sel < max && sel > 0){
                    scanf("%*c");
                    printf("\nDigite o nome: ");
                    fgets(p[sel], 30, stdin);
                    printf("\nOperacao finalizada");
                }else{
                    printf("\nLinha invalida");
                }
                break;
            case 2:
                printf("\nInforme a linha do nome a ser apagado(0-%d): ", max-1);
                scanf("%d", &sel);
                if(sel < max && sel > 0){
                    for(int i = 0; i < 30; i++){
                        p[sel][i] = '-';
                    }
                    printf("\nOperacao finalizada");
                }else{
                    printf("\nLinha invalida");
                }
                break;
            case 3:
                printf("\nInforme o nome a ser apagado: ");
                scanf("%*c");
                fgets(proc, 30, stdin);
                for(int i = 0; i < max; i++){
                    for(int j = 0; j < 30; j++){
                        if(p[i][j] != proc[j]){
                            cont++;
                        }
                    }
                    if(cont == 0){
                        for(int k = 0; k < 30; k++){
                            p[i][k] = '-';
                        }
                        boo = 1;
                    }
                    cont = 0;
                }
                if(boo){
                    printf("\nOperacao finalizada");
                    boo = 0;
                }else{
                    printf("\nNao foi possivel encontrar o nome");
                }
                break;
            case 4:
                printf("\nInforme o nome a ser alterado: ");
                scanf("%*c");
                fgets(proc, 30, stdin);
                for(int i = 0; i < max; i++){
                    for(int j = 0; j < 30; j++){
                        if(p[i][j] != proc[j]){
                            cont++;
                        }
                    }
                    if(cont == 0){
                        printf("\nDigite o novo nome: ");
                        fgets(p[i], 30, stdin);
                        boo = 1;
                    }
                    cont = 0;
                }
                if(boo){
                    printf("\nOperacao finalizada");
                    boo = 0;
                }else{
                    printf("\nNao foi possivel encontrar o nome");
                }
                break;
            case 5:
                printf("\nInforme a linha(0-%d): ", max-1);
                scanf("%d", &sel);
                if(sel < max && sel > 0){
                    printf("\n");
                    for(int i = 0; i < 30; i++){
                        if(p[sel][i] != '-'){
                            printf("%c",p[sel][i]);
                        }
                    }
                    if(p[sel][0] == '-'){
                        printf("Nao ha nome\n");
                    }
                }else{
                    printf("\nLinha invalida");
                }
                break;
            default:
                if(sel != 6){
                    printf("\nEssa opcao nao existe");
                }
                break;
        }
    }while(sel != 6);
    return 0;
}










