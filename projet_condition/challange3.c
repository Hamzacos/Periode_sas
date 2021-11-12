#include<stdio.h>
int main()
{
    int a,b;
    int temp;
    printf("donner moi deux valeur entier");
    scanf("%d%d",&a,&b);
    if(a != b || a < b)
    {
     temp = a;
      a = b;
      b = temp;
    printf("%d\t%d",a,b);
    }
    else 
    printf("%d\t%d",a,b);
    return (0);
}