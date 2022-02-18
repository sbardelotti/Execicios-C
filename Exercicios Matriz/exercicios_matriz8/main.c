#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5][4], m, id, s;
    m, id, s = 0;
    for(int i = 0; i < 5; i++){
        printf("Digite o numero de matricula do aluno %d\n",i+1);
        scanf("%d",&array[i][0]);
        printf("Digite a media das provas do aluno %d\n",i+1);
        scanf("%d",&array[i][1]);
        printf("Digite a media das trabalhos do aluno %d\n",i+1);
        scanf("%d",&array[i][2]);
        array[i][3] = (array[i][1] + array[i][2]) / 2;
        if(m < array[i][3]){
            m = array[i][3];
            id = array[i][0];
        }
        s += array[i][3]/5;
    }

    printf("Media das notas finais: %d\n", s);
    printf("A matricula do aluno com a maior nota final e: %d\n", id);



    return 0;
}
