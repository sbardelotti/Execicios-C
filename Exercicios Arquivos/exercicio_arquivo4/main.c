#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f1, *f2;
    char c;
    f1 = fopen("arq.txt","r");
    f2 = fopen("maiusculas.txt", "w");

    if(f1 == NULL || f2 == NULL){
        printf("Erro na abertura\n");
        exit(1);
    }

    while(1){
        c = getc(f1);
        if(feof(f1))
            break;
        putc(toupper(c),f2);
    }

    printf("Processo finalizado\n");

    fclose(f1);
    fclose(f2);

    system("pause");
    return 0;
}
