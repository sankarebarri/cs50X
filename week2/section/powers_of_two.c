#include <cs50.h>
#include <stdio.h>

// int n = 3;
// int power_of_two(int array[]);

int main(void)
{
    int size = get_int("Size: ");
    int elements[size];
    elements[0] = 1;
    printf("%i\n", elements[0]);
    for (int i = 1; i < size; i++)
    {
        elements[i] = elements[i-1] * 2;
        printf("%i\n", elements[i]);
    }
}

