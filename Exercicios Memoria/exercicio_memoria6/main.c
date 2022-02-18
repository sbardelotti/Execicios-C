#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **p, n, m, a;
    int aux[3] = {0,0,0};
    n = m = a = 0;
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &n);

    p = (int **) malloc(n*sizeof(int));

    printf("\nDigite a quantidade de colunas: ");
    scanf("%d", &m);

    for(int i = 0; i < n; i++){
        p[i] = (int *) malloc(m*sizeof(int));
        for(int j = 0; j < m; j++){
            printf("\nEntre com um numero: ");
            scanf("%d", &p[i][j]);
        }
    }

    printf("\n\n\n");

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d", p[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(p[i][j]>aux[0]){
                aux[0] = p[i][j];
            }
            for(int k = 0; k < 2; k++){
                if(aux[k]>aux[k+1]){
                    a = aux[k+1];
                    aux[k+1] = aux[k];
                    aux[k] = a;
                }
            }
        }
    }

    printf("\nOs 3 maiores numeros sao: %d, %d e %d\n", aux[0], aux[1], aux[2]);

    for(int k = 0; k < 3; k++){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(aux[k] == p[i][j]){
                    printf("\n%d esta na linha %d e na coluna %d", aux[k], i, j);
                }
            }
        }
    }
    free(p);

    return 0;
}
