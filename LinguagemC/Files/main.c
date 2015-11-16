#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    fp = fopen("main.c","r");
    while(1) {
        ch = fgetc(fp);
        printf("%c \n", *fp);

        if(ch == EOF){
            printf("Fim do arquivo");
            break;
            }
    }
    return 0;
}
