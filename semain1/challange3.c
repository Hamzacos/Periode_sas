#include<stdio.h>
int main()
{
    float metre;
    float mile;
    float const p = 1.609;
    printf("entez la distance en Metre");
    scanf("%f",&metre);
    metre = metre / 1000;
    mile = metre * p;
    printf("la distance en mile est:%.2f",mile);
    return(0);
}