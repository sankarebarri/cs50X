#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");

    // for (int i = 0; i < strlen(s); i++)
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        // if (s[i] >= 'a' && s[i] <= 'z')
        // {
        //     printf("%c\n", s[i] - 32);
        // }
        // else
        // {
        //     printf("%c\n", s[i]);
        // }

        // if (islower(s[i]))
        // {
        //     printf("%c", toupper(s[i]));
        // }
        // else
        // {
        //     printf("%c", s[i]);
        // }
        printf("%c", toupper(s[i]));
    }
    printf("\n");
}