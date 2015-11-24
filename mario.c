#include <stdio.h>

// Function Prototypes
void insertSpace(int current_row);
void insertHash(int current_row);
int i,j,k,n;

int main(void) {

//Constructors

n = 8;
for(i = 0; i < n; i++)                  // i = current row being printed
{                                       // top down.
    insertSpace(i);
    insertHash(i);
    printf("\n");
}
return 0;
}

void insertSpace(int current_row)
{
    for(j=0; j < (n - (current_row + 1)); j++)
    {
        printf(" ");
    }
}

void insertHash(int current_row)
{
    for(k=0; k < (current_row + 2); k++)
    {
        printf("#");
    }
}
