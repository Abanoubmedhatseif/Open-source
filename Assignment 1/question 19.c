#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number=7;

        for (int i=number;i>0;i--)
        {
            for(int j=i-1;j>=0;j--)
            {
                printf("*");
            }
            printf("\n");
        }
}
