#include <stdio.h>
#include <stdlib.h>
int x=0;
int y=1;
int main ()
{
   Fibonacci_123(10);
}

void Fibonacci_123 (int n)
{
   if (n<1)
   {
       printf("Invalid number must be > 1");
   }
   else if (n==1)
   {
       printf("%d ",0);
   }
   else if (n==2)
   {
       printf("%d %d ",0,1);
   }
   else if (n>=3)
    {

    printf("%d %d ",0,1);
    Fibonacci_more (n);
    }

}
void Fibonacci_more (int n)
{
    if (n<3)
    {
        return;
    }
    else
    {
    int fb;
    fb=x+y;
    x=y;
    y=fb;
    printf("%d ",fb);
    return Fibonacci_more(n-1) ;
    }

}
