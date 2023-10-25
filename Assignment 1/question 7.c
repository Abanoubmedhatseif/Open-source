#include <stdio.h>
#include <stdlib.h>

int main()
{
    int in1=0,in2=0,in3=0;
    printf("Enter the 3 numbers\n");
    while((!scanf("%d",&in1))||(!scanf("%d",&in2))||(!scanf("%d",&in3)))

    {
        printf("\nOops invalid input please enter 3 integer numbers\n");
        getchar();
        printf("\nnow enter the 3 numbers right this time\n");
    }
        if ( in1<in2 && in1<in3)
            {
            printf("The first number (\"%d\") is the smallest",in1);
            }
        else if (in2<in1 && in2<in3)
            {
            printf("The Second number (\"%d\") is the smallest",in2);
            }
        else if (in3<in1 && in3<in2)
            {
            printf("The third number (\"%d\") is the smallest",in3);
            }
        else
            {
            printf("Two numbers are equal and the third is larger");
            }
}
