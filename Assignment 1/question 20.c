#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, space, rows, a = 0;
   printf("Enter rows \n");
   scanf("%d", &rows);
   for (i=1; i<= rows; ++i, a = 0)
    {
      for (space = 1; space <= rows - i; ++space)
          {
             printf("  ");
          }
      while (a < 2 * i - 1)
          {
             printf("* ");
             a++;
          }
        printf("\n");
    }

}
