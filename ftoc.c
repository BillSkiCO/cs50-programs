#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Tempurature in F: ");
    float f = GetFloat();
    
    float c = 5.0 / 9.0 * (f - 32.0); // make sure to use floats for division 
                                      // or you will be multiplying by 0 due to
                                      // the way int works!
    
    printf("%.1f\n", c);    // %.1 indicated print of only .1 of float
}
