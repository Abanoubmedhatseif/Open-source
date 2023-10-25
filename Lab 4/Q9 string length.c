#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=0;
    char string1 [500] = {"Hello world"};
    for (int i=0;string1[i]!='\0';i++)
  {
      count++;
  }
  printf("%d",count);

}
