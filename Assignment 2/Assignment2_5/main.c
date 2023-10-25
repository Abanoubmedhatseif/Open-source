#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("%d",even_odd(5));
}

int even_odd (int x)
{
    if (0==x%2)
    {
        return 0;
    }
    else if (0!=x%2)
    {
        return 1;
    }
}
