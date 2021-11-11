#include <stdio.h>

int main() {
    int a;
    int b;
    int c,d; 
    int somme, moy; 
    printf ("entrez quate valeur  valeuer\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    somme = a + b+c+d;
    moy= somme / 4;
    printf("la somme de c'est trois valeur est:%d\n",somme);
    printf("la moyenne de c'est trois nombre est:%d",moy);
    return 0;
}