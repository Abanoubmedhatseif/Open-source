#include <stdio.h>
#include <stdlib.h>
void alpha (char c);
int main()
{
alpha() ;
}

void alpha (char c)
{

    if (c>='a'&&c<='z')
    {
        printf("Alphabet");
    }
    else if (c>='A'&&c<='Z')
    {
        printf("Alphabet");
    }
    else
    {

        printf("Not");
    }
}
