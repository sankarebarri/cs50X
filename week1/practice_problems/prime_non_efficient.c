#include <stdio.h>
#include <cs50.h>

bool is_divisible(int num);

int main(void)
{
    // get number
    int min_number;
    do
    {
        min_number = get_int("Min Number:");
    }
    while (min_number < 1);

    int max_number;
    do
    {
        max_number = get_int("Max Number:");
    }
    while (min_number >= max_number);
    // int min_number = get_int("Min Number:");
    // int max_number = get_int("Max Number:");
    for (int i = min_number; i < max_number; i++)

    if (is_divisible(i) && i != 1)
    {
        printf("%i\n", i);
    }
    
    // check if the number is divided by any number between 2 and the number-1, if no print 
    // the number
}

bool is_divisible(int num)
{
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0) 
        {
            return false;
        }
    }
    return true;
}