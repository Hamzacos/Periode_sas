#include<stdio.h>
int main()
{
    float lon,larg,c;
    printf("entrer la longeur et la largeur de rectangle\n");
    scanf("%f%f",&lon,&larg);
    c = 2 * (lon + larg);
    printf(" la circonference d'un rectangle est:%.2f",c);
    return(0);
}