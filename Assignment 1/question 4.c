#include <stdio.h>
#include <stdlib.h>
const double pi=3.14159265359;
int main()
{
    double rad=0,cir=0,area=0;
    printf("Please enter the radius\n");
        while(!scanf("%lf",&rad))
        {
            printf("\nOops invalid input\n");
            getchar();
            printf("\nlet's try again \n enter the radius\n");
        }
    printf("valid value\n");
    cir=2*rad*pi;
    area=(pi*rad*rad) ;
    printf("Circumference = %lf \nArea = %lf",cir,area);
}
