#include <stdio.h>
#include <cs50.h>

void binary_conversion(int number);

int main(void)
{
    int num = get_int("Number: ");
    while (num > 1)
    {
        printf("%i", num % 2);
        num = num / 2;
    }
    if (num == 1 || num == 0)
    {
        printf("%i", num);
    }
    printf("\n");

    // binary_conversion(num);
}