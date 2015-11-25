/* Generation of a "half pyramid" given user input
   for the height in blocks, where blocks are
   represented by #
   
   Author: Bill Golembieski
   Date:   11/23/2015
   Email:  BillGolembieski@projectu23.com
*/
#include <stdio.h>
#include <cs50.h>

// Function Prototypes
int promptInput();
void insertSpace(int current_row);
void insertSymbol(int current_row);
void printDesign(int hieght);

// Undeclared variables
int i, j, k, n, user_input;

// Declared Variables
int top_width = 2;

int main(void)
{
    user_input = promptInput();
    printDesign(user_input);
    return 0;
}

int promptInput()
{
    // Prompt User for an int between 1 and 23
    do
    {
        printf("Height: ");
        n = GetInt();     
    }
    while(n > 23 || n < 1);  
    
    // Return user input
    return n;
}

void printDesign(int hieght)
{
    // i is the current row, printed top down.
    for(i = 0; i < hieght; i++)
    {                           
        insertSpace(i);
        insertSymbol(i);
        printf("\n");
    }
}
void insertSpace(int current_row)
{
    // Inserts the correct number of spaces to right align.
    // This function not needed if left aligning #'s.
    for(j = 0; j < (user_input - (current_row + 1)); j++)
    {
        printf(" ");
    }
}

void insertSymbol(int current_row)
{
    // Inserts the correct number of #'s starting with
    // the first row having 2 #'s, then 
    for(k = 0; k < (current_row + top_width); k++)
    {
        printf("#");
    }
}
