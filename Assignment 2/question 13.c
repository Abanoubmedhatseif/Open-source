#include <stdio.h>
#include <stdlib.h>
void sum_float_into_int (float x,float y);
int main()
{
sum_float_into_int(15.5,16.4);
}
void sum_float_into_int (float x,float y)
    {
   int sum1=x+y;
    printf("%d",sum1);
    }
