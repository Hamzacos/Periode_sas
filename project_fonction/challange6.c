#include<stdio.h>
void tribulles(int n,int t[])
{
    int temp,i,j;
    for(i = 0;i<n;i++)
    {
        for(j =0;j<n;j++)
        {
            if(t[i] > t[i+1])
            {
                temp = t[i +1];
                t[i+1] = t[i];
                t[i] = temp;

            }
        }
    }
}
int main()
{
    int i,n,t[100];
    printf("entre le nombre de case");
    scanf("%d",&n);
    printf("entre %d de entier",n);
    for(int i= 0;i<n;i++)
    scanf("%d",t[i]);
    tribulles(n,t);
    printf("\nle nombre trier sont :");
    for (i = 0;i<n;i++)
    {
           printf("%d",t[i]);
    }
    printf("\n");
    
}