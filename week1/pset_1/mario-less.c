#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int step;
    do
    {
        step = get_int("Height: ");
    }
    while (step < 1 || step > 8);
    
    int space = step-1;
    int hash = 1;
    for (int i = 0; i < step; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < hash; k++)
        {
            printf("#");
        }
        printf("\n");
        space--;
        hash++;
    }
    
}