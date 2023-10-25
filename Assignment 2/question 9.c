#include <stdio.h>
#include <stdlib.h>

int main()
{
 swap_method_Temp(5,10);
}

void swap_method_Temp (int x ,int y)
{
    int temp =0;
    temp = x;
    x = y;
    y=temp ;
    printf("\nAfter swap Temp\n X= %d & Y= %d\n",x,y);
}
