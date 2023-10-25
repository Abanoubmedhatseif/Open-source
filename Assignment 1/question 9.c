#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Grading test\n");
    printf("\Type in your percentge\n");

    int grade=0 ;
    scanf("%d",&grade);

        if(grade<65&&grade>=50)
            printf("Pass");
        else if(grade<75&&grade>=65)
            printf("Good");
        else if(grade<85&&grade>=75)
            printf("Very Good");
        else if (grade>=85&&grade<=100)
            printf("Excellent");
        else if (grade<50)
            printf("Fail");
        else
            printf("Grades bet. 0-100 only");

}


