#include <stdio.h>
#include <stdlib.h>
void power_of_two (int number);

int main()
{
    int x=0;
    printf("Enter number\n");
    scanf("%lf",&x);
    power_of_two(x);
}

void power_of_two (int number)
{
    int yes_no=0;
    if (number==0)
      {
          yes_no = 0;
      }

    do
  {
    if (number%2!=0)
          {
              yes_no=0;
          }
    else if (number%2!=0)
    {
        yes_no=1;
    }

    number=number/2;
  }while(number%2!=0);

  switch (yes_no)
  {
    case 1:
    printf("Yes");
    break;

    case 0:
    printf("No");
    break;
  }


}
