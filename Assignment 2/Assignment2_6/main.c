#include <stdio.h>
#include <stdlib.h>

int main()
{
  CAP("ahmed");
}

void CAP (char x [])
{
char y [500];
int i;
  for ( i=0;x[i]!='\0';++i)
  {
    if (x[i]>='a'&&x[i]<='z')
    {
       y[i]=x[i]-32;
    }

  }
    y[i]='\0';
    printf("%s",y);
}
