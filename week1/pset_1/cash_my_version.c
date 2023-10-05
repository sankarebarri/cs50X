#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get_cents
    int get_cents;
    do
    {
        get_cents = get_int("Change owed: ");
    }
    while (get_cents < 0);
    
    int remainder = get_cents;
    int coins_count = 0;
    int number_of_coins;
    // divide cents by the biggest coins
    
    while (remainder > 0)
    {
        if (remainder >= 25)
        {
            number_of_coins = remainder / 25;
            remainder = remainder - (25 * number_of_coins);
            printf("%i\n", remainder);
        }
        else if (remainder >= 10)
        {
            number_of_coins = remainder / 10;
            remainder = remainder - (10 * number_of_coins);
            printf("less than 25 %i\n", remainder);
        }
        else if (remainder >= 5)
        {
            number_of_coins = remainder / 5;
            remainder = remainder - (5 * number_of_coins);
            printf("less than 10 %i\n", remainder);
        }
        else
        {
            number_of_coins = remainder;
            printf("less than 5 %i\n", remainder);
            remainder = 0;

        }
        
        coins_count += number_of_coins;
        printf("coins count %i\n", coins_count);
    }
}