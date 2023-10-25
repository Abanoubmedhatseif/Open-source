#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75
#define ESC 27
#define w 15
#define r 4
#define Enter 13
struct student
    {
        char name[20];
        char gender;
        int age;
        int id;
    } ;
int c;
void scan_student_array (struct student s[],int size);
void print_student_array (struct student s[]);


int main()
{

 int position=0;
 printf("Welcome press any button to Start\n");

 struct student s[100];


while (1)
{
   system("cls");
          gotoxy(2,4);
           if (position == 0)
           {
            SetColor(r);
           }
           else
           {
            SetColor(w);
           }
       printf("New\n");

       gotoxy(2,8);
           if (position == 1)
           {
            SetColor(r);
           }
           else
           {
            SetColor(w);
           }
       printf("Display\n");

       gotoxy(2,12);
           if (position == 2)
           {
            SetColor(r);
           }
           else
           {
            SetColor(w);
           }
       printf("Exit\n");

    char op = getch();
        if (-32==op)
        {
        op=getch();
        switch (op)
            {
            case UP :
            case LEFT :
             {
             position-=1;
             break;
             }

            case DOWN :
            case RIGHT :
             {
             position+=1;
             break;
            }

            }
        }
        else if (op==13)
        {
            switch (position)
             {
        case 0 :
        while (1)
        {
        system("cls");
        gotoxy(5,2);
        SetColor(w);
        scan_student_array(s,100);
        getch();

       break;
        }
        break;

            case 1 :
            while (1)
            {
               system("cls");
               gotoxy(2,2);
               SetColor(w);
               printf("Display\n");
               print_student_array(s);
               getch();
               break;
            }
            break;

    case 2 :
    while (1)
    {
       system("cls");
       gotoxy(2,4);
       SetColor(w);
       printf("Good bye\n");
     //  getch();
       return 0;
    }
        break;

}
}
if (position<0)
{
    position=2;
}
else if ( position >2)
{
    position=0;
}


}

}








void SetColor(int ForgC){
     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;


     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
 }

  void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

 }

 void scan_student_array (struct student s[],int size)
{

for (int i=0;i<100;i++)
{
        printf("\nEnter name [%d] \n ---------------- \n",(c+1));
        gets(s[c].name);
            fflush(stdin);
        printf("\nEnter Age[%d] \n ---------------- \n ",(c+1));
        scanf(" %d",&s[c].age);
            fflush(stdin);
        printf("\nEnter ID[%d] \n ---------------- \n",(c+1));
        scanf("%d",&s[c].id);
            fflush(stdin);
        printf("\nEnter Gender[%d] \n ---------------- \n",(c+1));
        scanf(" %c",&s[c].gender);
            fflush(stdin);
        c++;
        printf("\nTo stop press S , any button to continue\n");

        if (getch()=='s')
         break;

        system("cls");
        gotoxy(5,5);
}


}


    void print_student_array (struct student s[])
    {
        printf ("%d",c);
        for (int i=0;i<c;i++)
        {
            printf("--------------Student %d ------------",i+1);
            printf("\n Name [%d] : %s \n",(i+1),(s[i].name));
            printf(" Age[%d] : %d \n",(i+1),(s[i].age));
            printf(" ID[%d] : %d \n",(i+1),(s[i].id));
            printf(" Gender[%d] : %c \n",(i+1),(s[i].gender));
        }
    }
