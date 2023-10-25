#include <stdio.h>
#include <stdlib.h>

int main()
{
check(50,5);
}

void check (int x,int y)
{
    if (0==x%y)
    {
        printf("yes");
    }
    else
    {
        printf("No");
    }
}
