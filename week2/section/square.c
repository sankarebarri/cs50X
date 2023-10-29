#include <cs50.h>
#include <stdio.h>

int square(int n);

int main(void)
{
    int num = get_int("Number: ");
    printf("%i\n", square(num));
}

int square(int n)
{
    return n*n;
}