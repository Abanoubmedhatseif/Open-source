#include <stdio.h>
#include <stdlib.h>
int main()
{
int n=0;
printf("Enter number \n");
scanf("%d",&n);
int i;
while(n)
{
 for (i=0;i<=n;i++)
 {
     n/=10;
 }
}
printf("number of digits is %d",i);
}
