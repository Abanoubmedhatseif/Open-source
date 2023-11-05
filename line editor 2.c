
#include <stdio.h>
#include <string.h>
#include <windows.h>
#define DEL 127

#define MAX 100

void gotoxy(int x, int y);
void displayLine(const char line[], int cursorPosition) ;



int main()
 {
    char line[MAX] = "";
    int cursorPosition = 0;

    printf("  Line Editor \n -------------------------");

    while (1) {
        displayLine(line, cursorPosition);

        char ch = getchar();

        if (ch == EOF) // i can also use while ( ch != EOF ) and ignore this first if
        {
            break;
        }
        else if (ch == '\n') //  (\n) easier than using ASCII of Enter KEY
            {
           // system("cls"); // Doesnt work dont know why ?
            printf("\n%s\n", line);
            fflush(stdin);
            memset(line, 0, sizeof(line));
            cursorPosition = 0;

            }
        else if (ch == '\b' || ch == DEL)   // \b = backspace ( much easier )
             {
                if (cursorPosition > 0)
                     {
                        memmove(&line[cursorPosition - 1], &line[cursorPosition], strlen(line) - cursorPosition + 1);
                        cursorPosition--;
                     }
             }

        else if (strlen(line) < MAX - 1)
            {
                memmove(&line[cursorPosition + 1], &line[cursorPosition], strlen(line) - cursorPosition + 1);
                line[cursorPosition] = ch;
                cursorPosition++;
            }

    }

}




void gotoxy(int x, int y)
 {
    COORD coord = {0, 0};
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
 }

 void displayLine(const char line[], int cursorPosition) {
    gotoxy(0, 2);
    printf("%s", line); // Print the line
    gotoxy(cursorPosition, 2); // Move the cursor to its original position
}
