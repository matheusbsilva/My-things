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
    Filmes films[n];



    fp= fopen("locadora1.txt", "w");
        for(i=0;i<n;i++){
          // Ler os filmes;
          __fpurge(stdin);
          printf("Introduza um filme \n");
          gets(films[n].titulo);
          printf("Introduza as outra informações \n");
          scanf("%lf %d %d %d %d",&films[n].orcamento,&films[n].id,&films[n].gen,&films[n].ano,&films[n].dur);

          //Gravar no arquivo;
          fprintf(fp,"%s %lf %d %d %d %d",films[n].titulo,films[n].orcamento,films[n].id, films[n].gen, films[n].ano, films[n].dur);
          fputc('\n', fp);
    }
    fclose(fp);
    fp = fopen("locadora1.txt", "r");
    printf("Introduza os requisitos para busca\n");
    scanf("%d %d %d %d", &dAno, &idio, &orc, &tempo);
    //for(i=0;i<n;i++){
      //fscanf(fp,"\n %s %lf %d %d %d %d",locados[n].titulo, &locados[n].orcamento, &locados[n].id, &locados[n].gen, &locados[n].ano, &locados[n].dur);
      //printf("%s %lf %d %d %d %d ",locados[n].titulo, locados[n].orcamento, locados[n].id, locados[n].gen, locados[n].ano, locados[n].dur);
    //}
      /*if(dAno < films[n].ano){
        printf("%s\n",films[n].titulo);
      }
      else{
        if(idio = films[n].id){
          printf("%s\n",films[n].titulo );
        }
        else{
          if(orc > films[n].orcamento){
            printf("%s\n",films[n].titulo );
          }
          else{
            if(tempo < films[n].dur){
              printf("%s\n",films[n].titulo );
            }
          }
        }
      }
    } */

    fclose(fp);
    return 0;
}
