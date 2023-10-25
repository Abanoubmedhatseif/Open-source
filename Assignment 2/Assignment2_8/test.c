
#include <stdio.h>

// Defining the function
void primenumber(int number,int number2)
{
    int counter=number;
    while (counter>=number && counter <=number2)
    {
        for (int i = 2; i <= counter - 1;i++)
        {
            if (counter % i == 0)
            printf("&d is a prime number \n",counter);
        }
            printf("&d is a prime number \n",counter);
        counter++;
    }

}

// Driver code
int main()
{
	int num, res,num2;
	printf("Enter number\n");
	scanf("%d %d",&num,&num2);
	primenumber(num,num2);

}
