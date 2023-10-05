#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool check(string password);

int main(void)
{
    string password = get_string("Password: ");
    if (check(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol!\n");
    }
}

bool check(string password)
{
    // int pass_length = strlen(password);
    // char pass[pass_length];
    int upper_count = 0;
    int lower_count = 0;
    int number_count = 0;
    int character_count = 0;
    for (int i = 0; i < strlen(password); i++)
    {   
        // check for upper case letter
        if (password[i] > 64 && password[i] < 96)
        {
            upper_count++;
        }
        // check lower case letter
        else if (password[i] > 96 && password[i] < 123)
        {
            lower_count++;
        }
        // check for number
        else if (password[i] > 47 && password[i] < 58)
        {
            number_count++;
        }
        else if (password[i] > 32)
        {
            character_count++;
        }
    }
    if (upper_count > 0 && lower_count > 0 && number_count > 0 && character_count > 0)
    {
        return true;
    }
    return false;
}