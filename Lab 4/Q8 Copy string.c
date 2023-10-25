#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string1 [500] = {"Hello world"};
    char copy [500];
    int i=0;
    for (i;string1[i]!='\0';i++)
    {
        copy[i]=string1 [i];
    }
    i++;
    copy[i]='\0';
    printf("%s\n",string1);
    printf("%s",copy);
}
