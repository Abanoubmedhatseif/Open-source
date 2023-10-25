#include<stdio.h>
#include<stdlib.h>
void main()
{
int n;
printf("Enter number\n");
while (!scanf("%d",&n)||n<=0)
{
    printf("Invalid input\n please enter a positive number \n let's try again");
    getchar();
}
int flag=1;
for (int i=2;i<=(sqrt(n));i++)
{

   if (n%i==0)
    {
        flag=0;
        break;
    }

   else
   {
       flag=1;
   }
}

    if (flag)
    {
        printf("Prime number");
    }
    else
    {
        printf("Not a prime number");
    }
}
