#include <stdio.h>
#include <stdlib.h>


int EhTriangulo(int l1, int l2, int l3){
    if(l1+l2 > l3 && l1+l3 > l2 && l2+l3 > l1)
        return 1;
    else
        return 0;


}
int TipoTriangulo(int l1, int l2, int l3){
    if(EhTriangulo(l1,l2,l3)==1){
        if(l1==l2 && l1==l3 && l3==l2)
            return 1;
        else if(l1==l2 || l1==l3 || l2==l3)
            return 2;
            if(l1!=l2 && l1!=l3 && l2!=l3)
            return 3;
        }
    else
        return 0;


}


int main()
{
    int l1, l2, l3;
    scanf("%d %d %d", &l1, &l2, &l3);
        if(TipoTriangulo(l1,l2,l3)==0)
            printf("Nao e Triangulo");
        else if(TipoTriangulo(l1,l2,l3)==1)
            printf("Triangulo Equilatero");
        else if(TipoTriangulo(l1,l2,l3)==2)
            printf("Triangulo Isosceles");
        else if(TipoTriangulo(l1,l2,l3)==3);
            printf("Triangulo Escaleno");



    return 0;

}
