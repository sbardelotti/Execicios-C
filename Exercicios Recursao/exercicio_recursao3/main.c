#include <stdio.h>
#include <stdlib.h>
int boost(int b, int i, int aux, int m, int ini){
    if(i > 0 && ini){
        for(int k = 1; k <= i; k++){
            if(b == 0){
                m++;
                b = aux;
            }
            b--;
        }
        ini = 0;
    }
    ini = 0;
    if(b == 0){
        if(i == 49){
            return m++;
        }
        b = aux;
        m++;
    }
    if(i == 49){
        return m;
    }
    return  m + boost(b-1,i+1,aux,m,ini);
}
int main()
{
    int tipo_boost, boost_atual, auxiliar, sel;
    inicio:
    printf("Digite o tipo de boost: ");
    scanf("%d", &tipo_boost);
    printf("Digite o nivel de boost atual: ");
    scanf("%d", &boost_atual);
    auxiliar = tipo_boost;

    printf("Quantidade de stones para +50: %d\n",boost(tipo_boost,boost_atual,auxiliar,1,1));
    printf("\n");
    printf("Deseja calcular novamente? (0 - nao // 1 - sim) ");
    scanf("%d", &sel);
    if(sel){
        printf("\n\n");
        goto inicio;
    }
    return 0;
}
