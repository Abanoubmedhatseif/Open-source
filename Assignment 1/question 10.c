#include<stdio.h>
#include<stdlib.h>
void main()
{
int num1=0,num2=0;
char operat=0;
printf("\nplease enter the Two numbers\n");
scanf("%d %d",&num1,&num2);
printf("\nInput complete\n");
printf("\n Now Please choose your operator \n");
printf("+\n-\n*\n/\n");
scanf(" %c",&operat);

switch(operat)
{
    case'+':
    printf("Sum is %d",num1+num2);
    break;
    case'-':
    printf("Division is %d",num1-num2);
    break;
    case'*':
    printf("Multiplication result is %d",num1*num2);
    break;
    case'/':
        if (num2!=0)
        {
        printf("Division is %d",(float)num1/num2);
        }
        else
        printf("\n Cannot divide by zero");
    break;

}
}
