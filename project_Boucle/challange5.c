#include<stdio.h>
int main()
{
    int n,i;
    i = 0;
    printf("enter un nombre ");
    scanf("%d",&n);
    while(n != 0)
    {
        i *=10;
        i = i + n%10;
        n /=10;
    }
    printf("Le nombre en sens inverse est:%d\n",i);
    return 0;
}