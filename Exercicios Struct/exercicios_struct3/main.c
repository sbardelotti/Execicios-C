#include <stdio.h>
#include <stdlib.h>
struct endereco{
    char rua[20];
    char numero[4];
    char complemento[20];
    char bairro[20];
    char cep[9];
    char cidade[20];
    char estado[20];
    char pais[20];
};

struct data{
    char dia[3];
    char mes[3];
    char ano[5];
};

struct agendas{
    char nome[20];
    char email[20];
    struct endereco e;
    char telefone[12];
    struct data d;
    char observacao[50];
};

typedef struct agendas agenda;
agenda a[100];

void ordenar();
void imprimir(int i);
void imprimirTudo(int i);

int main()
{
    int sel, chave, res_proc;
    char proc[20];
    char proc_mes[3];
    char proc_dia[3];

    sel, chave, res_proc = 0;
    do{
        printf("\n Opcoes:");
        printf("\n 1. CADASTRAR PESSOA");
        printf("\n 2. PESQUISAR PESSOA");
        printf("\n 3. PESQUISAR POR MES");
        printf("\n 4. PESQUISAR POR DIA E MES");
        printf("\n 5. DELETAR PESSOA");
        printf("\n 6. SAIR");
        printf("\n \n DIGITE A OPCAO: ");
        scanf("%d", &sel);

        switch (sel){
            case 1:
                scanf("%*c");
                printf("\nDigite o Nome da Pessoa: ");
                fgets(a[chave].nome, 20, stdin);

                printf("\nDigite o E-mail: ");
                fgets(a[chave].email, 20, stdin);

                printf("\nDigite a Rua: ");
                fgets(a[chave].e.rua, 20, stdin);

                printf("\nDigite o Numero da Casa: ");
                fgets(a[chave].e.numero, 20, stdin);

                printf("\nDigite o Complemento: ");
                fgets(a[chave].e.complemento, 20, stdin);

                printf("\nDigite o Bairro: ");
                fgets(a[chave].e.bairro, 20, stdin);

                printf("\nDigite o CEP: ");
                fgets(a[chave].e.cep, 20, stdin);

                printf("\nDigite a Cidade: ");
                fgets(a[chave].e.cidade, 20, stdin);

                printf("\nDigite o Estado: ");
                fgets(a[chave].e.estado, 20, stdin);

                printf("\nDigite o Pais: ");
                fgets(a[chave].e.pais, 20, stdin);

                printf("\nDigite o Telefone: ");
                fgets(a[chave].telefone, 20, stdin);

                printf("\nDigite o Dia do Aniversario (xx): ");
                fgets(a[chave].d.dia, 20, stdin);

                printf("\nDigite O Mes do Aniversario (xx): ");
                fgets(a[chave].d.mes, 20, stdin);

                printf("\nDigite o Ano do Aniversario (xxxx): ");
                fgets(a[chave].d.ano, 20, stdin);

                ordenar(chave);
                chave++;
                break;

            case 2:
                scanf("%*c");
                printf("\nNome a ser procurado: ");
                fgets(proc, 20, stdin);
                printf("\nDeseja que: \n1 - Apenas informe os dados basicos \n2 - Mostre todos os dados\n");
                scanf("%d", &sel);

                for(int i = 0; i < chave; i ++){
                    if(!strcmp(a[i].nome,proc)){
                        if(sel == 1){
                            imprimir(i);
                        }else{
                            imprimirTudo(i);
                        }
                        res_proc ++;
                    }
                }

                if(res_proc == 0)
                {
                    printf("\nNão foi possivel encontrar uma pessoa com o nome especificado");
                }
                else
                {
                    res_proc = 0;
                }
                break;

            case 3:
                scanf("%*c");
                printf("\nDigite o Mes a ser Procurado: ");
                fgets(proc_mes, 3, stdin);
                printf("\nDeseja que: \n1 - Apenas informe os dados basicos \n2 - Mostre todos os dados\n");
                scanf("%d", &sel);

                for(int i = 0; i < chave; i ++){
                    if(!strcmp(a[i].d.mes,proc_mes)){
                        if(sel == 1){
                            imprimir(i);
                        }else{
                            imprimirTudo(i);
                        }
                        res_proc ++;
                    }
                }

                if(res_proc == 0)
                {
                    printf("\nNão foi possivel encontrar uma pessoa com o nome especificado");
                }
                else
                {
                    res_proc = 0;
                }
                break;

            case 4:
                scanf("%*c");
                printf("\nDigite o Dia a ser Procurado: ");
                fgets(proc_mes, 3, stdin);
                printf("\nDigite o Mes a ser Procurado: ");
                fgets(proc_mes, 3, stdin);
                printf("\nDeseja que: \n1 - Apenas informe os dados basicos \n2 - Mostre todos os dados\n");
                scanf("%d", &sel);

                for(int i = 0; i < chave; i ++){
                    if(!strcmp(a[i].d.mes,proc_mes) && !strcmp(a[i].d.dia,proc_dia)){
                        if(sel == 1){
                            imprimir(i);
                        }else{
                            imprimirTudo(i);
                        }
                        res_proc ++;
                    }
                }

                if(res_proc == 0)
                {
                    printf("\nNão foi possivel encontrar uma pessoa com o nome especificado");
                }
                else
                {
                    res_proc = 0;
                }
                break;

            case 5:
                scanf("%*c");
                printf("Digite o nome da pessoa a ser excluida: ");
                fgets(proc, 20, stdin);

                for(int i = 0; i < chave; i++){
                    if(!strcmp(a[i].nome, proc)){
                        printf("\n Deseja exluir a pessoa:");
                        imprimir(i);
                        printf("\n 0 - Não / 1 - Sim\n");
                        scanf("%d", &sel);

                            if(sel == 1){
                                if(i != chave - 1){
                                    for(int j = 0; j < 99 - i; j++){
                                        a[j+i] = a[j+i+1];
                                    }
                                }
                                chave--;

                            }
                        goto fim;
                    }
                }
                printf("Nenhum resultado encontrado");

                fim:
                break;

            default:
                if(sel == 5){
                    //sair
                }
                else{
                    printf("\n Essa opção não existe");
                }
                break;
        }
    }while(sel != 6);
    return 0;
}

void ordenar(int chave){
    agenda aux;

    for(int i = 0; i < chave; i++){
        for(int j = 0; j < chave - 1; j++){
            for(int k = 0; k < strlen(a[j].nome); k++){
                if(a[j].nome[k] > a[j + 1].nome[k]){
                    aux = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = aux;
                }
            }
        }
    }
}

void imprimir(int i){
    printf("\n Nome: %s", a[i].nome);
    printf("\n Telefone: %s", a[i].telefone);
    printf("\n E-mail: %s", a[i].email);
    printf("\n\n----------------");
}

void imprimirTudo(int i){
    printf("\n Nome: %s", a[i].nome);
    printf("\n Telefone: %s", a[i].telefone);
    printf("\n E-mail: %s", a[i].email);
    printf("\n Rua: %s", a[i].e.rua);
    printf("\n Numero da Casa: %s", a[i].e.numero);
    printf("\n Complemento: %s", a[i].e.complemento);
    printf("\n Bairro: %s", a[i].e.bairro);
    printf("\n CEP: %s", a[i].e.cep);
    printf("\n Cidade: %s", a[i].e.cidade);
    printf("\n Nome: %s", a[i].e.pais);
    printf("\n Aniversario: %s/%s/%s", a[i].d.dia, a[i].d.mes, a[i].d.ano);
    printf("\n\n----------------");
}






