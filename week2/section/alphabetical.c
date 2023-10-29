#include <stdio.h>
#include <cs50.h>
#include <string.h>

string check(string word);

int main(void)
{
    string name = get_string("Type in your word: ");
    
    printf("%s\n", check(name));
}

string check(string word)
{
    int length = strlen(word);
    for (int i = 0; i < length - 1; i++)
    {
        if (word[i] > word[i + 1])
        {
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}