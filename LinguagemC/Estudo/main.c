#include <stdio.h>
#include <stdlib.h>
int mostrarTamanho(int var1,int var2,int var3){
    printf("%d %d %d\n",sizeof(var1),sizeof(var2),sizeof(var3) );

}
int main(){
int choice;
int var1;
double var2;
long double var3;
do{
    scanf("%d", &choice);
switch(choice){
    case 1 : mostrarTamanho(var1,var2,var3); break;
    case 2 : printf("teste"); break;
    case 3: break;
    }








  }while(choice != 3);


  return 0;


}
