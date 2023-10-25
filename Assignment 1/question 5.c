#include <stdio.h>
#include <stdlib.h>

int main()
{

    char c;
    printf("Enter the character\n");
    while (scanf("%d",&c))
    {
    printf("Characters Only\n");
    getchar();
    printf("Try again\n");
    }

    printf("the ASCII of the character is %d",c);
}
