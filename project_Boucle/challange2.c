#include <stdio.h>
int main()
{
    int i, j=0, s, l;
  
    printf("Entrez le nombre de lignes: ");
    scanf("%d",&l);
  
    for(i=1; i<=l; i++,j=0)
    {
        for(s=1; s<=l-i; s++)
        {
            printf("  ");
        }
        while(j != 2*i-1)
        {
            printf("* ");
            j++;
        }
        printf("\n");
    }
    
    return 0;
}
