#include <stdio.h>
#include <stdlib.h>

int main()
{
char string1 [500] = {"iti"};
char string2 [500];
int i;
  for ( i=0;string1[i]!='\0';++i)
  {
    if (string1[i]>='a'&&string1[i]<='z')
    {
       string2[i]=string1[i]-32;
    }

  }
    string2[i]='\0';
    printf("%s",string2);
}
