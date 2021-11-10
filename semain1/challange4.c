#include<stdio.h>
int main()
{
    float metre;
    float mile;
    float const p = 1.609;
    printf("entez la distance en Mile");
    scanf("%f",&mile);
    metre = mile / p;
    metre = metre * 1000;
    printf("la distance en metre est:%.2f",metre);
    return(0);
}