#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1, *f2;
    int lin, col, q, zl, zc;
    lin = col = q = zl = zc = 0;
    f1 = fopen("matrizentrada.txt","r");
    f2 = fopen("matrizsaida.txt", "w");

    if(f1 == NULL || f2 == NULL){
        printf("Erro na abertura\n");
        exit(1);
    }

    lin = getc(f1) - 48;
    col = getc(f1) - 48;
    q = getc(f1) - 48;
    int array[lin][col];
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            array[i][j] = 1;
        }
    }
    for(int i = 0; i < q; i++){
        getc(f1);
        zl = getc(f1) - 48;
        zc = getc(f1) - 48;
        array[zl][zc] = 0;
    }

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            fprintf(f2,"%d",array[i][j]);
        }
        fprintf(f2,"\n");
    }

    printf("Processo finalizado\n");

    fclose(f1);
    fclose(f2);

    system("pause");
    return 0;
}
