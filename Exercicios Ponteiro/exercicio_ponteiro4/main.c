#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int raizes(float A,float B,float C,float *X1,float *X2);

int main()
{
    float a, b, c, x1, x2;
    a = 3;
    b = -6;
    c = -9;
    raizes(a,b,c,&x1,&x2);
    return 0;
}

int raizes(float A,float B,float C,float *X1,float *X2){
    float delta = ((B*B)-(4*A*C));;
    printf("Delta: %f\n", delta);
    if(delta < 0){
        printf("Nao tem raizes reais");
        return 0;
    }else if(delta == 0){
        *X1 = *X2 = (-B)/(2*A);
        printf("Uma raiz real: %f", *X1);
        return 1;
    }else{
        *X1 = (-B+sqrt(delta))/(2*A);
        *X2 = (-B-sqrt(delta))/(2*A);
        printf("Duas raizes reais: X1 = %f -- X2 = %f", *X1, *X2);
        return 2;
    }
}
