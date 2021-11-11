#include<stdio.h>
int main()
{
    int a;
    int b; 
    int A,s,m,d,mod;
    printf("enter la premier valeur");
    scanf("%d",&a);
    printf("entrer le deuxieme valeur");
    scanf("%d",&b);
    A = a + b;
    s = a - b;
    m = a * b;
    d = a / b;
    mod = a % b;
    printf("le totele est:%d\n",A);
    printf("la sousstraction est:%d\n",s);
    printf("la multiplication est:%d\n",m);
    printf("la division est:%d\n",d);
    printf("le reste de la division est:%d\n",mod);

    return(0);
    
}