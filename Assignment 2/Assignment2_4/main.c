#include <stdio.h>
#include <stdlib.h>
void calculator (double x,double y,char operat);
int main()
{
calculator(10,50,'-');
}

void calculator (double x,double y,char operat)
{
switch(operat)
{
    case'+':
    printf("Sum is %lf",x+y);
    break;
    case'-':
    printf("Subtraction = %lf",x-y);
    break;
    case'*':
    printf("Multiplication result is %lf",x*y);
    break;
    case'/':
        if (y!=0)
        {
        printf("Division is %lf",(double)x/y);
        }
        else
        printf("\n Cannot divide by zero");
    break;
}
}
