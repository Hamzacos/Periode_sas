#include <stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int i,j,p;
    printf("entrez un mot ou une valeur:\t");
    scanf("%s",s);
    p=1;
    for (i = 0,j =strlen(s)-1 ;i<j ;i++ ,j--)
      {
          if(s[i]!=s[j])
          {
              p=0;
              break;
          }
      }
      if (p == 1)
      {
      printf("%s est palindrome\n",s);
      }
      else
      {
      printf("%s n est pas palindrome\n",s);
      }

    return 0;
}