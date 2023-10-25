#include <stdio.h>
#include <stdlib.h>

int main()
{
  char string1 [500] = {"Hello#world@#$"};
  char string2 [500];
  int i;
  for ( i=0;string1[i]!='\0';i++)
  {
    if ((string1[i]>='A'&&string1[i]<='Z')||(string1[i]>'a'&&string1[i]<'z'))
        string2[i]=string1[i];
  }
    string2[i]='\0';
    printf("%s",string2);
}
