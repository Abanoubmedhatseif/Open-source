#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    printf("Enter your number\n");
    scanf("%d",&n);
    countHoles(n);
}

void countHoles (int x)
{
    int counter=0;
       do{
    int simplify=x%10;
        x = x/10;
        switch (simplify)
        {
            case 0:
            case 4:
            case 6:
            case 9:
                counter++;
                break;

            case 8:
                counter+=2;
                break;
        }
       }while(x!=0);
        if (0==counter)
        {
            printf("\n%d hole",counter);
        }
       else
        {
            printf("\n%d holes",counter);
        }
}
