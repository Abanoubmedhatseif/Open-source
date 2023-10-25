#include <stdio.h>
#include <stdlib.h>

int main()
{
printf("Press any button\n");
char ch=getch();
     if ((-32)==ch)
     {
         printf("Extended key");
     }
     else
     {
         printf("Normal key");
     }
printf("%d",ch);
}
