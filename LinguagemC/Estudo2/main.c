#include <stdio.h>
#include <stdlib.h>
int troca(int *ptr1,int *ptr2){
    int t;
    t=*ptr1;
    *ptr1=*ptr2;
    *ptr2=t;
    return *ptr1, *ptr2;



}

int main()
{
    int x =2,y=3,*px = &x, *py= &y;

    printf("%d %d %d %d\n %d %d %d %d\n",x, &x,px,*px,y,&y,py,*py);

    px=py;

    //int *ptr1=&x,*ptr2=&y;
    printf("%d %d %d %d\n %d %d %d %d\n",x, &x,px,*px,y,&y,py,*py);
    //troca(&x,&y);

    return 0;
}
