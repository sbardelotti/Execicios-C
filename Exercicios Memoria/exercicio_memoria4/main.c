#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p;
    char vogal[6] = "aeiou";
    int n, cont;
    cont = 0;
    scanf("%d", &n);
    p = (char *) malloc((n * sizeof(char)) + sizeof(char));
    p[n+1] = '\0';
    scanf("%*c");
    fgets(p,n+1,stdin);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 5; j++){
            if(p[i] == vogal[j]){
                cont++;
            }
        }
        if(cont == 0){
            printf("%c", p[i]);
        }
        cont = 0;
    }
    return 0;
}
