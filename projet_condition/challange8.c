#include<stdio.h>
int main()
{
  char i;
  printf("entre un caractere:\t");
  scanf("%c",&i);
  if(i >= 'a' && i <= 'z')
    {
        printf("%c est un alphabet en miniscule",i);
    }
    else if(i >= 'A' && i <='Z')
    {
        printf("%c est un alphabet en majiscule",i);
    }
    else if (!(i >= 'A' && i <='Z') && !(i >= 'a' && i <= 'z'))
    {
        printf("%c ce n'est pas un alphabet",i);
    }
    return 0;
}
