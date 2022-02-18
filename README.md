Alguns exercícios simples de C.

---Exercicios de Matrizes---

Exercício 01:  Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. 
O programa deve executar os seguintes passos:
    (a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
    (b) Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0], A[1] e A[5] 
    do vetor e mostre na tela esta soma.
    (c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
    (d) Mostre na tela cada valor do vetor A, um em cada linha.

Exercício 02: Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm
10 elementos cada. Imprimir todos os conjuntos.

Exercício 03: Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá
ser impresso o maior e o menor elemento do vetor e sua respectivas posições.

Exercício 04: Considere um vetor A com 11 elementos onde A1 < A2 < · · · < A6 > A7 > A8 >
· · · > A11, ou seja, está ordenado em ordem crescente até o sexto elemento, e a partir
desse elemento está ordenado em ordem decrescente. Dado o vetor da questão anterior,
proponha um algoritmo para ordenar os elementos.

Exercício 05: Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.

Exercício 06: Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
elementos. Escreva ao final a matriz obtida.

Exercício 07: Calcule a soma dos elementos que estão acima e abaixo da
diagonal principal de uma matriz.

Exercício 08: Facça um programa que leia uma matriz de 5 linhas e 4 colunas contendo as seguintes
informações sobre alunos de uma disciplina, sendo todas as informações do tipo inteiro:
• Primeira coluna: número de matrícula (use um inteiro)
• Segunda coluna: média das provas
• Terceira coluna: média dos trabalhos
• Quarta coluna: nota final
Elabore um programa que:
    (a) Leia as três primeiras informações de cada aluno
    (b) Calcule a nota final como sendo a soma da média das provas e da média dos
    trabalhos
    (c) Imprima a matrícula do aluno que obteve a maior nota final (assuma que só existe
    uma maior nota)
    (d) Imprima a média aritmética das notas finais

---Exercicios de String---

Exercício 01: Faça um programa que receba uma palavra e a imprima de trás-para-frente.

Exercício 02: Leia uma cadeia de caracteres e converta todos os caracteres para maiúscula.

Exercício 03: Leia um vetor contendo letras de uma frase inclusive os espaços em branco. Retirar os
espaços em branco do vetor e depois escrever o vetor resultante.

Exercício 04: Escreva um programa que leia duas palavras e diga qual deles vem primeiro na ordem
alfabética.

Exercício 05: Faça um programa que encontre o conjunto de 5 dígitos consecutivos em uma sequência
númerica que gere a maior soma.

---Exercicios de Structs---

Exercício 01: Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme
solicitado abaixo:
• Horário: composto de hora, minutos e segundos.
• Data: composto de dia, mês e ano.
• Compromisso: texto que descreve o compromisso.

Exercício 02: Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira 
prova.

Exercício 03: Fazer um programa para simular uma agenda de telefones. Para cada pessoa devem-se
ter os seguintes dados:
• Nome
• E-mail
• Endereço (contendo campos para Rua, número, complemento, bairro, cep, cidade,
estado, país).
• Telefone 
• Data de aniversário (contendo campo para dia, mês, ano).
• Observações: Uma linha (string) para alguma observação especial.
    (a) Definir a estrutura acima.
    (b) Declarar a variável agenda (vetor) com capacidade de agendar até 100 nomes.
    (c) Definir um bloco de instruções busca por primeiro nome: Imprime os dados da
    pessoa com esse nome (se tiver mais de uma pessoa, imprime para todas).
    (d) Definir um bloco de instruções busca por mês de aniversário: Imprime os dados de
    todas as pessoas que fazem aniversário nesse mês.
    (e) Definir um bloco de instruções busca por dia e mês de aniversário: Imprime os
    dados de todas as pessoas que fazem aniversário nesse dia e mês.
    (f) Definir um bloco de instruções insere pessoa: Insere por ordem alfabética de nome.
    (g) Definir um bloco de instruções retira pessoa: Retira todos os dados dessa pessoa e
    desloca todos os elementos seguintes do vetor para a posição anterior.
    (h) Definir um bloco de instruções imprime agenda com as opções:
    • Imprime nome, telefone e e-mail.
    • Imprime todos os dados.
    (i) O programa deve ter um menu principal oferecendo as opções acima.

---Exercicios de Função---

Exercício 01: Crie uma função que recebe como parâmetro um número inteiro e devolve o seu dobro.

Exercício 02:  Faça uma função para verificar se um número é um quadrado perfeito.

Exercício 03: Faça duas funções: uma chamada DesenhaLinha e a outra chamada exc. A primeira deve desenhar uma linha na tela usando vários símbolos de igual (Ex: ========), já a segunda deve gerar pontos de exclamação conforme o exemplo abaixo (n = 5):
!
!!
!!!
!!!!
!!!!!
As funções devem receber por parâmetro quantos sinais serão mostrados.

Exercício 04: Faça uma função ‘Troque’, que recebe duas variáveis A e B e troca o valor dela.

Exercício 05: Faça uma função que calcule o desvio padrão de um vetor v contendo n números
onde m é a media do vetor.

Exercício 06: Faça uma função que receba uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na diagonal principal.

Exercício 07: Considerando a estrutura

    struct Vetor{
        float x;
        float y;
        float z;
    };

Para representar um vetor no R3, implemente uma função que calcule a soma de dois vetores. Essa função deve obedecer ao protótipo:

    void soma (struct Vetor* v1, struct Vetor* v2, struct Vetor* res);

Onde os parâmetros v1 e v2 são ponteiros para os vetores a serem somados, e o parâmetro res é um ponteiro para uma estrutura vetor onde o resultado da operação deve ser armazenado.

---Exercicios de Recursão---

Exercício 01: Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório
dos números de 1 a N.

Exercício 02: Faça uma função recursiva que calcule e retorne o fatorial de um número inteiro N.

Exercício 03: Nesse exercício eu criei um código que calcula o boost (A melhoria do personagem) de um pokemon
de um OT Tibia de pokemon, conhecido como PXG, o boost é calculado por meio progressivo em que a razão da sequência aumentam em 1 quando o nivel ultrapassa o produto do valor indicado pelo boost e a razão (b*r).
Exemplos:
    Boost 3: 1 + 1 + 1 + 2 + 2 + 2 + 3 + 3 + 3 + ...  
    Boost 4: 1 + 1 + 1 + 1 + 2 + 2 + 2 + 2 + 3 + 3 + 3 + 3 + ...

---Exercicios de Ponteiro---

Exercício 01: Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e
exiba o maior endereço.

Exercício 02: Crie um programa que contenha uma função que permita passar por parâmetro dois
números inteiros A e B. A função deverá calcular a soma entre estes dois números e armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá modificar o valor do primeiro parâmetro. Imprima os valores de A e B na função principal.

Exercício 03: Crie uma função que receba dois parâmetros: um array e um valor do mesmo tipo do
array. A função deverá preencher os elementos de array com esse valor. Não utilize índices para percorrer o array, apenas aritmética de ponteiros.

Exercício 04: Implemente uma função que calcule as raízes de uma equação do segundo grau do tipo
Ax^2 + Bx + C = 0, onde A != 0. Essa função deve obedecer ao seguinte protótipo:

    int raizes(float A,float B,float C,float * X1,float * X2);

Essa função deve ter como valor de retorno o número de raízes reais e distintas da equação. Se existirem raízes reais, seus valores devem ser armazenados nas variáveis apontadas por X1 e X2.

---Exercicios de Memória---

Exercício 01: Crie um programa que:
    (a) Aloque dinamicamente um array de 5 números inteiros,
    (b) Peça para o usuário digitar os 5 números no espaço alocado,
    (c) Mostre na tela os 5 números,
    (d) Libere a memória alocada.

Exercício 02: Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação
dinâmica de memória. Em seguida, leia do usuário seus valores e imprima o vetor lido.

Exercício 03:  Crie um programa que declare uma estrutura (registro) para o cadastro de alunos.
    (a) Deverão ser armazenados, para cada aluno: matrícula, sobrenome (apenas um) e
    ano de nascimento.
    (b) Ao início do programa, o usuário deverá informar o número de alunos que serão
    armazenados.
    (c) O programa deverá alocar dinamicamente a quantidade necessária de memória
    para armazenar os registros dos alunos.
    (d) O programa deverá pedir ao usuário que entre com as informações dos alunos.
    (e) Ao final, mostrar os dados armazenados e liberar a memória alocada.

Exercício 04: Faça um programa que receba do usuário o tamanho de uma string e chame uma
função para alocar dinamicamente essa string. Em seguida, o usuário deverá informar o
conteúdo dessa string. O programa imprime a string sem suas vogais.

Exercício 05: Faça um programa que simule a memória de um computador: o usuário irá especificar o
tamanho da memória, ou seja, quantos bytes serão alocados do tipo inteiro. Para tanto,
a memória solicitada deve ser um valor múltiplo do tamanho do tipo inteiro. Em seguida,
o usuário terá 2 opções: inserir um valor em uma determinada posição ou consultar o
valor contido em uma determinada posição. A memória deve iniciar com todos os dados
zerados.

Exercício 06: Faça um programa que leia dois números N e M e:
• Crie e leia uma matriz de inteiros N x M;
• Localize os três maiores números de uma matriz e mostre a linha e a coluna onde
estão.

Exercício 07: Faça um programa que leia números do teclado e os armazene em um vetor alocado
dinamicamente. O usuário irá digitar uma sequência de números, sem limite de quantidade. Os números serão digitados um a um e, sendo que caso ele deseje encerrar a entrada de dados, ele ira digitar o número ZERO. Os dados devem ser armazenados na memória deste modo:
• Inicie com um vetor de tamanho 10 alocado dinamicamente;
• Após, caso o vetor alocado esteja cheio, aloque um novo vetor do tamanho do vetor
anterior adicionado espaço para mais 10 valores (tamanho N+10, onde N inicia com 10);
• Copie os valores já digitados da área inicial para esta área maior e libere a memória
da área inicial;
• Repita este procedimento de expandir dinamicamente com mais 10 valores o vetor
alocado cada vez que o mesmo estiver cheio. Assim o vetor irá ser ’expandido’ de
10 em 10 valores.

Ao final, exiba o vetor lido. Não use a função REALLOC.

Exercício 08: Faça um programa para associar nomes as linhas de uma matriz de caracteres.
O usuário irá informar o número máximo de nomes que poderão ser armazenados. Cada nome poderá ter até 30 caracteres com o ’\0’. O usuário poderá usar 5 opções diferentes para manipular a matriz:
    (a) Gravar um nome em uma linha da matriz;
    (b) Apagar o nome contido em uma linha da matriz;
    (c) Informar um nome, procurar a linha onde ele se encontra e substituir por outro nome;
    (d) Informar um nome, procurar a linha onde ele se encontra e apagar;
    (e) Pedir para recuperar o nome contido em uma linha da matriz;

---Exercicios de Arquivos---

Exercício 01: Escreva um programa que:
    (a) Crie/abra um arquivo texto de nome “arq.txt”;
    (b) Permita que o usuário grave diversos caracteres nesse arquivo, até que o usuário
    entre com o caractere ‘0’;
    (c) Feche o arquivo.

Exercício 02: Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas
linhas esse arquivo possui.

Exercício 03: Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas
letras são vogais.

Exercício 04: Faça um programa que leia o conteúdo de um arquivo e crie um arquivo com o mesmo
conteúdo, mas com todas as letras minúsculas convertidas para maiúsculas.

Exercício 05: Faça um programa que leia um arquivo que contenha as dimensões de uma matriz (linha
e coluna), a quantidade de posições que serão anuladas, e as posições a serem anuladas (linha e coluna). 
O programa lê esse arquivo e, em seguida, produz um novo arquivo com a matriz com as dimensões dadas no arquivo lido, e todas as posições especificadas no arquivo ZERADAS e o restante recebendo o valor 1.

Ex: arquivo “matriz.txt”
3 3 2 /3 e 3 dimenssões da matriz e 2 posições que serão anuladas*/
1 0
1 2 /*Posições da matriz que serão anuladas.

arquivo “matriz saida.txt”
saída:

1 1 1
0 1 0
1 1 1

Exercício 06: Crie um programa que receba como entrada o número de alunos de uma disciplina. Aloque dinamicamente dois vetores para armazenar as informações a respeito desses alunos. O primeiro vetor contém o nome dos alunos e o segundo contém suas notas finais. Crie um arquivo que armazene o nome do aluno e sua nota final. Use nomes com no máximo 40 caracteres. Se o nome não contém 40 caracteres, complete com espaço em branco. 

Exercício 07: Faça um programa para gerenciar as notas dos alunos de uma turma salva em um arquivo. O programa deverá ter um menu contendo as seguintes opções:
    (a) Definir informações da turma;
    (b) Inserir aluno e notas;
    (c) Exibir alunos e médias;
    (d) Exibir alunos aprovados;
    (e) Exibir alunos reprovados;
    (f) Salvar dados em Disco;
    (g) Sair do programa (fim).
Faça a rotina que gerencia o menu dentro do main.
