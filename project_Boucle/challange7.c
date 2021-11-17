#include <stdio.h>
int main()
{
    int n,r,n1,n2,i;
    n1 = 1;
    n2 = 1;
    printf("entre le nombre de nteim");
    scanf("%d",&n);
    printf("la seri de fibonnaci est:\n");
    for(i=0;i<n;i++)
    {
        if (i <=1)
         r = i;
         else 
         {
             r = n1 + n2;
             n1 = n2;
             n2 = r;
         }
         printf("%d\n",r);
    }
}