#include <stdio.h>
#include <stdlib.h>
struct agenda{
    char horario[9];
    char data[11];
    char compromisso[20];
};

int main(){
    struct agenda a;

    printf("Digite um horario: ");
    gets(a.horario);
    printf("\nDigite uma data: ");
    gets(a.data);
    printf("\nDigite a descricao do compromisso: ");
    gets(a.compromisso);
    printf("\n----------\n");
    printf("As %s do dia %s tem o seguinte compromisso: %s", a.horario, a.data, a.compromisso);

    return 0;
}
