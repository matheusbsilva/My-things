#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct regs{
    char titulo[100];
    double orcamento;
    int id;
    int gen;
    int ano;
    int dur;

} Filmes;




int main()
{

  FILE *fp;
  int n,dAno,i,idio,orc,tempo;

  scanf("%d", &n);
  Filmes films;



  fp= fopen("locadora1.txt", "w");
      for(i=0;i<n;i++){
        // Ler os filmes;
        __fpurge(stdin);
        gets(films.titulo);
        scanf("%lf %d %d %d %d",&films.orcamento,&films.id,&films.gen,&films.ano,&films.dur);
        //Gravar no arquivo;
        fprintf(fp,"%s %lf %d %d %d %d",films.titulo,films.orcamento,films.id, films.gen, films.ano, films.dur);
        fputc('\n', fp);
  }
  fclose(fp);

  fp = fopen("locadora1.txt", "r");
      scanf("%d %d %d %d", &dAno, &idio, &orc, &tempo);

     while(fscanf(fp,"%s %lf %d %d %d %d",films.titulo,&films.orcamento,&films.id,&films.gen,&films.ano,&films.dur) != EOF){
        if(films.ano > dAno)
          printf("%s\n",films.titulo );
      }rewind(fp);putchar('\n');


      while(fscanf(fp,"%s %lf %d %d %d %d",films.titulo,&films.orcamento,&films.id,&films.gen,&films.ano,&films.dur) != EOF){
        if(films.id == idio)
          printf("%s\n",films.titulo );
      }rewind(fp);putchar('\n');


      while(fscanf(fp,"%s %lf %d %d %d %d",films.titulo,&films.orcamento,&films.id,&films.gen,&films.ano,&films.dur) != EOF){
        if(films.orcamento < orc)
          printf("%s\n",films.titulo );
      }rewind(fp);putchar('\n');


      while(fscanf(fp,"%s %lf %d %d %d %d",films.titulo,&films.orcamento,&films.id,&films.gen,&films.ano,&films.dur) != EOF){
        if(films.dur > tempo)
          printf("%s\n",films.titulo );
      }rewind(fp);putchar('\n');




    fclose(fp);
    return 0;
}
