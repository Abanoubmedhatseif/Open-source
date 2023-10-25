#include <stdio.h>
#include <stdlib.h>

void main()
{
    int in1=0,in2=0;
    int result=0;
    printf("Enter 2 numbers\n");
    while((!scanf("%d",&in1))||(!scanf("%d",&in2)))
    {
        printf("\noops invalid input please enter 2 integer numbers\n");
        getchar();
        printf("\nnow enter the 2 numbers right this time\n");
    }
    printf("Input successful\n");
    result=((in1+in2)*3)-10;
    printf("the result is : %d ",result);
}
