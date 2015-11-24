#include <stdio.h>

// Function Prototypes
void insertSpace(int current_row);
void insertSymbol(int current_row);
void printHalfPyramid(int hieght);
int i,j,k,user_input;
int top_step_width = 2;
int retry;

int main(void) 
{
do
{
printf("Height: ");
scanf("%i", user_input);

if (user_input < 1)
    retry == 1;
else
    retry == 0;
}
while(retry == 1);

printHalfPyramid(user_input);
return 0;
}

void printHalfPyramid(int hieght)
{
    for(i = 0; i < hieght; i++)                     // i = current row being printed
{                                                   // top down.
    insertSpace(i);
    insertSymbol(i);
    printf("\n");
}
}
void insertSpace(int current_row)
{
    // Inserts the correct number of spaces to right align.
    // This function not needed if left aligning #'s.
    
    for(j = 0; j < (user_input - (current_row + 1)); j++)  // Height - (Row + 1)
    {
        printf(" ");
    }
}

void insertSymbol(int current_row)
{
    // Inserts the correct number of #'s starting with
    // the first row having 2 #'s, then 
    for(k = 0; k < (current_row + top_step_width); k++)
    {
        printf("#");
    }
}
