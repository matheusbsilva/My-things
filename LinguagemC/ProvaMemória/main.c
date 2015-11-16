#include <stdio.h>
#include <stdlib.h>

 typedef struct {
    char nome[20];
    double nota;
    struct lista *pNext;

    }lista;

int main()
{


    lista alunos, *pIni,*p;
    alunos.pNext= NULL;
    pIni= &alunos;
    lista *pReg[100], *pLastReg[100];
    p= pIni->pNext;
    int i=0;


    for(i=0;i<100;i++){
        pReg[i]= NULL;
    }

    do{
        pReg[i] = malloc(sizeof(alunos));
        scanf("%s %lf", &alunos.nome, &alunos.nota);

        i++;
    }while (alunos.nome != "FIM" && alunos.nota != 0.0);

    alunos.pNext=NULL;


    return 0;
}
