#include<stdio.h>
int main()
{
    float f;
    float c;
    float const x = 1.8;
    int const y = 32;
    printf("enter  la temperature en Fahrenheit\n");
    scanf("%f",&f);
    c = (f - y) / x;
    printf("la temperature est: %.2f",c);
    return (0);
    }
