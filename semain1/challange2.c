#include<stdio.h>
int main()
{
    float n;
    float c;
    float const x = 1.8;
    int const y = 32;
    printf("entrer la valeur du temperature en Fahrenheit\n");
    scanf("%f",&n);
     c = (n * x) + y;
     printf("la valeur du temperature en degre Celsius est:%f",c);
    return(0);
}