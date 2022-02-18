#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, chave, tam, boo;
    n = chave = boo = 0;
    tam = 10;
    int *p = (int *) malloc(tam*sizeof(int));
    int *p2 = (int *) malloc(sizeof(int));

    do{
        scanf("%d", &n);
        if(n!=0){
            if(chave == tam){
                if(boo){
                    *p = (int *) malloc((tam+10)*sizeof(int));
                    for(int i = 0; i < tam; i++){
                        p[i] = p2[i];
                    }
                    free(p2);
                    tam += 10;
                    boo = 0;
                }else{
                    *p2 = (int *) malloc((tam+10)*sizeof(int));
                    for(int i = 0; i < tam; i++){
                        p2[i] = p[i];
                    }
                    free(p);
                    tam += 10;
                    boo = 1;
                }
            }

            if(boo){
                p2[chave] = n;
            }else{
                p[chave] = n;
            }

            chave++;
        }
    }while(n != 0);

    for(int i = 0; i < chave; i++){
        if(boo){
            printf("%d - ", p2[i]);
        }else{
            printf("%d - ", p[i]);
        }
    }
    return 0;
}
