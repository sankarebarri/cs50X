#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void cipher_text(string text, int key);

int main(int argc, string argv[])
{

    if (argc == 2 && isdigit(*argv[1]))
    {
        string plain_text = get_string("plaintext: ");
        int key = atoi(argv[1]);
        printf("%s: ", "ciphertext");
        cipher_text(plain_text, key);   
    }
    else
    {
        printf("Usage: %s %s\n", argv[0], "key");
    }
}

void cipher_text(string text, int key)
{
    int ascii_number;
    int cipher_number;
    for (int i = 0; i < strlen(text); i++)
    {
        ascii_number = text[i];
        if (ascii_number > 64 && ascii_number <= 90)
        {
            ascii_number = ascii_number - 64;
            cipher_number = (ascii_number + key) % 26;
            printf("%c", cipher_number + 64);
        }
        else if (ascii_number >= 97 && ascii_number <= 122)
        {
            ascii_number = ascii_number - 96;
            cipher_number = (ascii_number + key) % 26;
            printf("%c", cipher_number + 96);
        }
        else
        {
            printf("%c", ascii_number);
        }
    }
    printf("\n");
}