#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
 int a;
 srand(time(NULL));
 a = rand();
 a = a%7;
  switch(a)
  {
      case 0: printf("Lundi");
      break;
       case 1: printf("Mardi");
      break;
       case 2: printf("Mercredi");
      break;
       case 3: printf("Jeudi");
      break;
       case 4: printf("Vendredi");
      break;
       case 5: printf("Samedi");
      break;
       case 6: printf("Dimanche");
      break;  
  }

    return 0;
}
 