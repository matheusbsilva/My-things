#include <stdio.h>
#include <stdlib.h>
typedef struct teste {
    char nome[20];
    char onde [30];
    int hora;
    double preco;
    };


int main()
{

    struct teste atracao;/*
    gets(atracao.nome);__fpurge(stdin);
    gets(atracao.onde);__fpurge(stdin);
    scanf("%d %lf", &atracao.hora, &atracao.preco);
    printf("%s %s %d %.2lf", atracao.nome, atracao.onde, atracao.hora, atracao.preco);
*/

    scanf("%s", &atracao.nome);

    printf("%s", atracao.nome);
    return 0;
}
