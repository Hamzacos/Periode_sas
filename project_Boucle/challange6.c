#include<stdio.h>

int main()
{
    int n,p,m;
    m = 0;
    printf("enter un nombre entier");
    scanf("%d",&n);
    printf("les nombres premier sont:\n");
    while(n >= 2)
    {
        for(p=1;p<=n;p++)
        {
            if(n % p == 0)
            m++;
        }
        if(m==2)
        {
           printf("%d\n",n);
        }
        m = 0;
        n--;
    }
    return 0;
}