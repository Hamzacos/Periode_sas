#include<stdio.h>
int main()
{
    char prenom[50];
    char nom [50];
    char sex[50];
    char num [10];
    int age;
    printf("saisi votre prenom\n");
    scanf("%s",prenom);
    printf("saisi votre nom\n");
    scanf("%s",nom);
    printf("saisi votre age\n");
    scanf("%d",&age);
    printf("saisi votre sex\n");
    scanf("%s",sex);
    printf("saisi votre numero telephone\n");
    scanf("%s",num);
    printf("votre prenom est:%s\n",prenom);
    printf("votre nom est:%s\n",nom);
    printf("votre age est:%d\n",age);
    printf("votre sex est:%s\n",sex);
    printf("votre numero telephone est:%s\n",num);
    return(0);
}