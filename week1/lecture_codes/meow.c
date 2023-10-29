#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int counter = 3;
    while (counter > 0)
    {
        printf("Meow\n");
        counter--;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Woof\n");
    }

    while (true)
    {
        printf("True\n");
    }
}