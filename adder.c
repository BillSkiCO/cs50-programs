#include <stdio.h>
#include <cs50.h>

int main(void)
{

    printf("This is a simple addition program\n");
    printf("Please input your first number: ");
    int numb1 = GetInt();
    printf("Please input your second number: ");
    int numb2 = GetInt();
    
    printf("The result of %i + %i is %i\n" , numb1, numb2, numb1 + numb2);

}
