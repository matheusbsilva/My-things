#include <stdio.h>
typedef struct registro {
  char nome[50];
  int idade;


}  regs;
int main (){
  FILE *fp;
  regs user;
  //gets(user.nome); __fpurge(stdin);
  scanf("%d", user.idade);
  //fp=malloc(sizeof(user));
  fp = fopen("fileteste.txt ", "w");
    if(fp== NULL)
        printf("Arquivo nao criado");

    else
    fprintf(fp,"%d",user.idade);

  fclose(fp);
  return 0;


}
