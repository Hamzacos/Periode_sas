#include <stdio.h>
int main()
{
    int d,i,pr;
    printf("entrer un nombre");
    scanf("%d",&d);
     pr = 1;
     for (i= 2; i<d;i++)
     if(d%i==0)
     {
         pr= 0;
         break;
     }
     if (pr == 1)
     printf("le nombre est premier");
     else 
          printf("le nombre n'est pas  premier");

    }