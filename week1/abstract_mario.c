#include <stdio.h>
#include <cs50.h>

int get_size(void);
void print_grid(int size);

int main(void)
{
    // get size of grid
    int n = get_size();

    // print grid of bricks
    print_grid(n);
}

// declaring function of get_size that takes no input
int get_size(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    } while (n < 1);
    
    return n;
}

// declaring of print_grid that takes input of size, but that returns nothing. it rather prints(void)
void print_grid(int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}