#include<stdio.h>
int main()
{
    int n,i,np,max,som;
    max= 0;
    som= 0;
    printf("enter un nombre entier");
    scanf("%d",&n);
    for(i=0; i<n;i++)
    {
        printf("entrer un nmbre entre 0 et 100\n");
        scanf("%d",&np);
              if(np<100 && np%10==0)
         {
       if (np>max)
    {
        max = np; 
    }
        som += np;
    }
    }
    printf("le nombre max dans la serie est:%d\n",max);
    printf("la somme de serie est:%d",som);
      

}
  