#include<stdio.h>
#include<stdlib.h>
void main()
{
int num=0,power=1,result=1;
printf("Enter number and power\n");
scanf("%d %d",&num,&power);

    for (int i=1;i<=power;i++)
    {
    result*=num;
    }
    printf("Result = %d",result);



}
