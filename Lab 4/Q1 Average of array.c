#include <stdio.h>
#include <stdlib.h>

int main()
{
int array1[]={1,2,3,4,5,6,7,8,9};
int sum=0;
    for(int i=0;i<=8;i++)
    {
        sum+=array1[i];
    }
    printf("the average of Array 1 is %lf",((double)sum/9));
}
