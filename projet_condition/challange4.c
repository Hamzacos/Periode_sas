#include<stdio.h>
int main()
{
    int a,b;
    int s;
    printf("donner moi deux nombre entier");
    scanf("%d%d",&a,&b);
    s = a + b;
    if (a == b)
    {
        s = s * 3;
        printf("le triple de la somme est:%d",s);
    }
    else 
    printf("la somme de deux nombre est:%d",s);
    return(0);
}