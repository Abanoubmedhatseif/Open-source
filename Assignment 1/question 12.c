#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n=1,fact=1;
    printf("Enter number\n");
    scanf("%d",&n);

    for (int i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("Result = %d",fact);
}
