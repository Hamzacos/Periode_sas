#include<stdio.h>
int a,b;
void echange(a,b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("a=%d b=%d",a,b);
}
int main()
{
   printf("entrer deux nombre");
   scanf("%d%d",&a,&b);
   printf("la valeur de a est=%d et la valeur de b est=%d\n",a,b);
   echange();
    printf("-----------------------------\n");
     printf("la valeur de a est=%d et la valeur de b est=%d\n",a,b);
   return 0;
}