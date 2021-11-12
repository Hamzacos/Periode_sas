#include<stdio.h>
int main()
{
    int m;
    printf("entrez votre note");
    scanf("%d",&m);
    if( m< 10)
    {
        printf("vous etes recaler");
    }
    else if(m>= 10 && m < 12)
    {
        printf("vous avez mention passable");
    }
    else if(m >=12 && m < 14)
    {
        printf("vous avez mention assez bien");
    }
    else if(m >=14 && m<16)
    {
        printf("vous avez un mention bien");
    }
    else if(m>=16)
    {
        printf("vous avez un mention tres bien");
    }
    return 0;
}
