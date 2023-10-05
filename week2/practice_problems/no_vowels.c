#include <stdio.h>
#include <cs50.h>
#include <string.h>

char replace(char word);

// int main(int argc, string argv[])
// {
//     for (int i = 0; i < argc; i++)
//     {
//         replace(argv[1][i]);
//     }
// }

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Non conformed command-line argument\n");
        return 1;
    }
    else
    {string word = argv[1];
    for (int i = 0; i < strlen(word); i++)
    {
        printf("%c", replace(word[i]));
    }
    printf("\n");
    }
}

char replace(char letter)
{
    switch(letter)
    {
        case 'a':
            letter = '6';
            break;
        case 'e':
            letter = '3';
            break;
        case 'i':
            letter = '1';
            break;
        case 'o':
            letter = '0';
            break;
    }
return letter;
}