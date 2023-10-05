#include <stdio.h>
#include <cs50.h>

bool valid_triangle(int a, int b, int c);

int main(void)
{
    int length[3];
    for (int i = 0; i < 3; i++)
    {
        length[i] = get_int("Length: ");
    }
    
    if (valid_triangle(length[0], length[1], length[2]))
    {
        printf("Valid!\n");
    }
    else
    {
        printf("Invalid!\n");
    }
}

bool valid_triangle(int a, int b, int c)
{
    if (a < 0 || b < 1 || c < 1)
    {
        return false;
    }

    if (a+b < c || a+c < b || b+c < a)
    {
        return false;
    }
    return true;
}