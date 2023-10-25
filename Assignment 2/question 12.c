#include <stdio.h>
#include <stdlib.h>

int main()
{
     int temp=0 ;
     printf("\Enter current Temp\n");
     scanf("%d",&temp);
     heater_time(temp);
}

void heater_time (int x)
{

        if(x<30&&x>=0)
            printf("Required heating time is 7 mins");
        else if(x<60&&x>=30)
            printf("Required heating time is 5 mins");
        else if(x<90&&x>=60)
            printf("Required heating time is 3 mins");
        else if (x>=90)
            printf("Required heating time is 1 min");
        else if (x>100)
            printf("Temp > 100 C no heating needed");
}
