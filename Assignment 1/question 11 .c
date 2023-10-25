#include <stdio.h>
#include <stdlib.h>

void main()
{
	int sum=0;
	for(int i=1;i<=100;i++)
    {
		sum+=i;
	}

	printf("The sum of first 100 integers is %d\n\n",sum);
	scanf("%d", &sum);

}


