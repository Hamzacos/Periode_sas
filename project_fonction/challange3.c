 #include<stdio.h>
 #include <stdbool.h>
 bool isPremier(int nb)
 {
     bool pr;
     int i;
    pr = true;
     for (i= 2; i<nb;i++)
     if(nb%i==0)
     {
         pr= false;
         break;
     }
     if (pr == true)
     printf("le nombre est premier");
     else 
          printf("le nombre n'est pas  premier");
    }
 int main()
 {
     int n;
     printf("entrer un nombre");
     scanf("%d",&n);
     isPremier(n);
     return 0;
 }