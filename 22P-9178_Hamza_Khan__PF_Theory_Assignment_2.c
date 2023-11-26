#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<unistd.h> 
#include<windows.h> // for Gotoxy cursor function.
void gotoxy(int x ,int y)
{
    COORD cordination = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),cordination);
}
int main()
{
    int i , j ;
    int rows = 10 , colonm = 70;
    system("color 0"); //Background color black
    srand(time(NULL)); //Random Number Generator
    while(1)  
    {
        for ( i = 0; i < rows; i++)
        {
            for (j = 0; j < colonm; j++)
            {
                if (rand() % 10 == 0)
                {
                    printf(" * ");
                }
                else
                {
                    printf(" ");
                }            
            }
            printf("\n");
        }
        gotoxy(35,10); // Positioning the text in the middle use Gotoxy
		printf("WELCOME TO THE GAME SHOW\n");
        for ( i = 0; i < rows; i++)
        {
            for (j = 0; j < colonm; j++)
            {
                if (rand() % 10 == 0)
                {
                    printf(" * ");
                }
                else
                {
                    printf(" ");
                }            
            }// trying commit
            printf("\n");
        }
         sleep(1); // Freezes the program for 1 sec before before printing another set of stars
		 system("cls"); // Removing the previous set of stars  
         //HOO
    } 

}
