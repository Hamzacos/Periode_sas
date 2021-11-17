#include <stdio.h>

int main()
{
    int i,n,m;
    printf("entre un nombre entier");
    scanf("%d",&i);
    for (n =0;n<=10;n++)
    {
        m = n * i;
        printf("%d*%d=%d\n",n,i,m);
    }

    return 0;
}