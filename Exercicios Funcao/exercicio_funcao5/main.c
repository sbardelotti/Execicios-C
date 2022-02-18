#include <stdio.h>
#include <stdlib.h>
void dp(float n[], int len, float *resultado){
    float media, variancia, desvio;
    variancia = 0.0f;
    for(int i = 0; i < len; i++){
        media += n[i]/len;
    }
    for(int i = 0; i < len; i++){
        if(n[i] - media > 0){
            desvio = n[i] - media;
        }else if(n[i] - media < 0){
            desvio = media - n[i];
        }else{
            desvio = 0;
        }
        variancia += desvio * desvio / (float)len;
    }

    *resultado = sqrt(variancia);
}
int main()
{
    float array[5] = {1,2,3,4,5};
    float r = 0;

    dp(array, sizeof(array)/4, &r);
    printf("%f", r);
    return 0;
}
