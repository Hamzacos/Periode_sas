#include<stdio.h>

int addition(int a, int b)
{
    int result;
    result = a + b;
    return result;
}
int main()
{
    int x,y;
    printf("entre deux nombre\n");
    scanf("%d%d",&x,&y);
    printf("la somme de c'est nombre est:%d",addition(x,y));
    return 0;
}