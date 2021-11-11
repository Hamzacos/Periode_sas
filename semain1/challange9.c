#include<stdio.h>
#include<math.h>
int main()
{
    double x1,x2,y1,y2, distance;
    const double p = 2;
    printf("enter le premier cordooner de point P\n");
    scanf("%lf",&x1);
    printf("enter le deuxieme cordooner de point P\n");
    scanf("%lf",&y1);
    printf("enter le premier cordooner de point M\n");
    scanf("%lf",&x2);
    printf("enter le deuxime cordooner de point M\n");
    scanf("%lf",&y2);
    distance = sqrt(pow(x2-x1,p)+pow(y2-y1,p));
    printf("la distance entre le point P et le le point M est:%.2lf", distance);
    return 0;
   
}