#include<stdio.h>
#include<stdlib.h>
void main()
{
 int n=0,rem=0,rev=0;
 printf("Input\n");
 scanf("%d",&n);
     while (n>0)
    {
    rem=n%10;
    rev=rev*10+rem;
    n/=10;
    }
    printf("Reversed number = %d", rev);
}

