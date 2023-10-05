// Write a function to replace vowels with numbers
// Get practice with strings
// Get practice with command line
// Get practice with switch

#include <cs50.h>
#include <stdio.h>
#include <string.h>

char replace(char word);
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
