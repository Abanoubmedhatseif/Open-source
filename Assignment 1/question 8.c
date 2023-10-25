#include <stdio.h>
#include <stdlib.h>

int main()
{
    double in1=0;
    printf("Enter your number\n");
    while(!scanf("%lf",&in1)||in1<=0)
    {
        printf("Only Positive numbers are allowed\n try again\n");
        getchar();
    }
    int root=sqrt(in1);
        if (root*root == in1)
            {
                 printf(" \"%lf\" is a perfect square",in1);
            }
        else
            {
                 printf(" \"%lf\"  isn't a perfect square",in1);

            }

}

