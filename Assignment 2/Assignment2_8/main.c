#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("%lf\n",sqrt(25));

    prime_number(1,10);
}

void prime_number (int num1 ,int num2) // 5 - 9
{
    int j=2;
    for (int number=num1;number<=num2;number++)
    {

            while (j<=number/2)
            {
                if (0==number%j)
                   {
                    printf("\n%d is a prime number \n",number);
                   }
              j++;

            }

    }

}
