#include<stdio.h>
int main()
{
    int a; 
    printf("donner une valeur");
    scanf("%d",&a);
    if( a % 2 ==0 )
     printf("le nombre que vous donnez est paire");
     else 
     printf("le nombre que vous donnez est impaire");
}