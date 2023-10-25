#include <stdio.h>
#include <stdlib.h>

int main()
{
 int array[100] ;
 int size ;

 printf("Enter size of the list\n");

         while(!(scanf("%d",&size))||((size<1||size>100)))
         {
             int i=0;
             printf("Invalid input make sure the size is a \"positive number\" and maximum allowed size is 100 \n");
             printf(" lets try again \n");
             getchar();
             printf("Enter size of the list\n");
         }


                printf(" Valid size = %d \n now lets fill our array \n",size);
                for(int i=0;i<size;i++)
                     {
                        printf("Please enter no %d\n",i+1);
                        scanf("%d",&array[i]);
                     }

                        printf("Input Complete\n\n") ;


for(int i=0;i<size;i++)
     {
        printf("NO %d is %d\n",(i+1),array[i]);
     }


}
