#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1=0,num2=0;
   printf("Enter the 2 numbers\n");
   while((!scanf("%d",&num1))||(!scanf("%d",&num2)))
         {
             printf("invalid input try again\n");
             getchar();
         }
       if (num1==num2)
           {
               printf("\nEqual");
           }
       else if (num1<num2)
           {
               printf("\nNot Equal ! \n num2 (%d) is bigger",num2);
           }
        else
           {
               printf("\nNot Equal ! \n num1 (%d) is bigger",num1);
           }

}

