#include <stdio.h>
int main ()
{
        int r ;
        const float pi = 3.14;
        float c ;
        printf("entre la valeur du rayon de cercle");
        scanf("%d",&r);
        c = 2 * pi * r;
        printf("la circonférence du cercle est:%.2f",c);
        return 0;
}