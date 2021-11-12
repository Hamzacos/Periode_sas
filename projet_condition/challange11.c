#include<stdio.h>
int main()
{
    int h1,h2;
    int m1,m2;
    int s1,s2;
    int i;
    i = 1;
    printf("entrer le premier instant \n");
    scanf("%d:%d:%d",&h1,&m1,&s1);
    printf("entre le deuximen instant\n");
    scanf("%d:%d:%d",&h2,&m2,&s2);
    if(h1>h2)
    i = 2;
    if(h1 == h2 && m1 > m2)
    i = 2;
    if(h1 == h2 && m1 == m2 && s1> s2)
    i=2;
    if(h1 == h2 && m1 == m2 && s1 == s2)
    i = 0;
    switch(i)
    {
        case 0: printf("Il s'agit du meme instant\n");
        break;
        case 1: printf("Le premier instant vient avant le deuxieme\n");
        break;
        case 2: printf("Le deuxieme instant vient avant le premier\n");
        break;
    }
    return 0;
}