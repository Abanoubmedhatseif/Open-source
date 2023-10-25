#include <stdio.h>
#include <stdlib.h>

void main()
{
double C=0;
double F=0;
printf("Enter Temp in C\n");
scanf("%lf",&C);
F=(C*9/5+32);
printf("\n%lf in Celsius is %lf in Fahrenheit\n",C,F);
}
