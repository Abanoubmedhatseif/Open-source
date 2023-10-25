#include <stdio.h>
#include <stdlib.h>
void check (int x);
int main()
{
check(60);
}

void check (int x)
{
    if (x>0)
    {
        printf("Positive");
    }
    else if (x<0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }
}
