#include <stdio.h>
#include <stdlib.h>

int main()
{

   int array[]={10,50,60,2};


    int max=0,min=0;
    for(int i=0;i<(sizeof(array)/sizeof(array[1]));i++)
     {
        if (array[i]>max)
           {
               max=array[i];
           }

     }
     printf("Max value is %d\n",max);

     for(int i=0;i<(sizeof(array)/sizeof(array[1]));i++)
     {
        if (array[i]<min);
           {
               min=array[i];
           }
     }
     printf("min value is %d\n",min);
}
