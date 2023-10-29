#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char ans = get_char("Type 'y' or 'n': ");

    if (ans == 'y' || ans == 'Y')
    {
        printf("Yes\n");
    }
    else if (ans == 'n' || ans == 'N')
    {
        printf("No\n");
    }
}