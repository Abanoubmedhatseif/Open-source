#include <stdio.h>
#include <stdlib.h>

void main()
{

    int x, y;
    for (x = 0; x < 10; x++)
    {
        for (y = 0; y < 10; y++)
        {
            if (x == y || x == 10 - 1 - y)
                {
                    printf("*");
                }
            else
                {
                    printf(" ");
                }
        }
        printf("\n");
    }
}
