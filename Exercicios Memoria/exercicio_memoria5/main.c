#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, n, k, sel, val;
    sel = val = 0;
    scanf("%d", &n);
    p = (int *) malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        p[i] = 0;
    }
    do{
        printf("\n---------------------");
        printf("\nInserir valor - 1");
        printf("\nConsultar posicao - 2");
        printf("\nSair - 3\n");

        scanf("%d", &sel);
        switch(sel){
            case 1:
                printf("\nDigite a posicao da memoria a ser inserido (0-%d): ", n-1);
                scanf("%d", &k);
                if(k>n-1){
                    printf("\n Posicao invalida");
                }else{
                    printf("\nDigite o valor: ");
                    scanf("%d", &val);
                    p[k] = val;
                }
                break;
            case 2:
                printf("\nDigite a posicao da memoria a ser consultado (0-%d): ", n);
                scanf("%d", &k);
                if(k>n-1){
                    printf("\n Posicao invalida");
                }else{
                    printf("\nA posicao %d possui o valor: %d", k, p[k]);
                }
                break;
            default:
                if(sel != 3){
                    printf("\nEssa opcao nao existe");
                }
                break;
        }
    }while(sel != 3);
    free(p);
    return 0;
}
