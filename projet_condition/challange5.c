#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    double d;
    printf("donner moi trois valeur pour une  equation 2eme degre");
    scanf("%d%d%d",&a,&b,&c);
    d = pow(b,2) - 4 * a * c;
     if (d<0)  
     printf("Cette equation n a pas de solutions reelles.\n");
     else if (  d==0)  
    {
     printf("Cette equation a une seule solution reelle :\n");
     printf(" x =  %.2f\n", (double)-b/(2*a));
    }
     else 
    { 
     printf("Les solutions reelles de cette equation sont :\n");
     printf(" x1 = %.2f\n", (-b+sqrt(d))/(2*a));
     printf(" x2 = %.2f\n", (-b-sqrt(d))/(2*a));
    }
  return 0;
}
