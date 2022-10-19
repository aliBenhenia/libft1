#include <stdio.h>
#include <string.h>
#include "libft.h"
// -Wall -Wextra  -Werror
int main()
{
  // start 
   char *s = "$..../$....bedro akkk ...as...uu //..";
  char *p = "$./ll";
  int i = 0;
  int j = 0;
   while (s[i])
   {
    if (strchr(p,s[i]) != NULL)
    {
        j++;
    }
    else{
      break;
    }
    i++;
   } 
   printf("%s |  %d\n",s + j,j);
   // end 
   char *m = ".../*lol yok ...//yok ll .../ joool ///....";
   char *n = ".*/..*";
   int len = strlen(m) - 1;
   int t = len;
    while (m[len])
    {
      if(strrchr(n,m[len]) != NULL)
      {
        t--;
      }
      else{
        break;
      }
      len--;
    }
    
   printf("%s | %d\n\n",m + t,t);
}