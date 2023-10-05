#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    // int n = 3;
    // const n = 3;
    // int n = get_int("Size: ");
    // while (n < 0)
    // {
    //     n = get_int("Size: ");
    // }

    // Get size of grid
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    
    // print a line of n by n grid
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    
}