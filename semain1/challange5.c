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
    if (-20 < c && c < 0)
    {
        printf("la temperature est: %.2f",c);
      printf("donc il est tres froid");
    }
      else if ( 0 < c && c < 25)
      {
          printf("la temperature est : %.2f",c);
          printf(" donc il est froid");
      }
      else if ( 25<c && c<35)
      {
          printf("la temperature est : %.2f",c); 
          printf("donc il est chaud");
      }
      else if (35 < c && c<60)
      {
          printf("la temperature est : %.2f",c);
          printf("donc il est tres chaud");
      }
      return(0);

}