#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include <time.h>

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main()
{
    int row=0,col=0,value=1 ;
    int size=0;

    printf("Enter size of box odd numbers only\n");
    scanf("%d",&size);

    row=1;
    col=(size+1)/2;
do{
    delay(1);
    gotoxy(col*3,row);
    printf("%d ",value);

        if(value%size==0)
            {
             row++;
            }
        else
            {
             row--;
             col--;
            }

        if(row==0)
        {
            row=size;
        }

        if(col==0)
            {
            col=size;
            }

        value++;
}while(value<=size*size);

}

void delay(int number_of_seconds)
{

    int milli_seconds = 1000 * number_of_seconds;

    int start_time = clock();

    while (clock() < start_time + milli_seconds) ;
}
