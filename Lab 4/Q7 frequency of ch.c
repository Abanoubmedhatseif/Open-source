#include <stdio.h>
#include <stdlib.h>

int main()
{
    char string[100]={"ahmed adel"},ch='a';
    int freq=0;

    for (int j=0;string [j] != '\0';j++)
    {
        if (ch==string[j])
        {
           ++freq;
        }
    }

    printf("frequency of a is %d",freq);
}
