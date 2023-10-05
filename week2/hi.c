#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // char c1 = 'H';
    // char c2 = 'i';
    // char c3 = '!';

    // string s = "Hello";
    // string t = "Bye";

    // printf("%c%c%c\n", c1, c2, c3);
    // printf("%i %i %i\n", c1, c2, c3);
    // printf("%s\n", s);

    // printf("%i %i %i %i %i %i\n", s[0], s[1], s[2], s[3], s[4], s[5]);

    // printf("%s\n", s);
    // printf("%s\n", t);

    string words[2];

    words[0] = "Hello";
    words[1] = "Diallo";

    printf("%s\n", words[0]);
    printf("%s\n", words[1]);
    printf("%c%c\n", words[0][2], words[1][0]);
}