#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // int numbers[] = {23, 65, 27, 98, 64};
    // int number = get_int("Type in your number: ");
    // for (int i = 0; i < 5; i++)
    // {
    //     if (numbers[i] == number)
    //     {
    //         printf("Found!\n");
    //         return 0;
    //     }
    // }
    // printf("Not found!\n");
    // return 1;
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};
    string s = get_string("Type in your monopoly: ");
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found!\n");
            return 0;
        }
    }
    printf("Not found!\n");
    return 1;
}