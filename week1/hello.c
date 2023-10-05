#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string fname = get_string("What is your name: ");
    string lname = get_string("What's your last name: ");
    printf("My name%%, is %s %s \n", fname, lname);
}