#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[11];
    int aux = 0;

    for(int i = 0; i < 11; i++){
            array[i] = rand() % 100;
    }


    for(int i = 0; i < 11; i++){
        for(int j = 0; j < 10; j++){
            if(array[j] < array[j + 1]){
                aux = array[j];
                array[j] = array[j + 1];
                array[j + 1] = aux;
            }
        }
    }

     for(int i = 0; i < 11; i++){
        for(int j = 0; j < 5; j++){
            if(array[j] > array[j + 1]){
                aux = array[j];
                array[j] = array[j + 1];
                array[j + 1] = aux;
            }
        }
    }



    for(int i = 0; i < 11; i++){
            printf("%d\n",array[i]);
    }

    return 0;
}
