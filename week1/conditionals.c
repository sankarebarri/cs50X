#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // int x = get_int("x: ");
    // switch(x)
    // {
    //     case 1:
    //         printf("One\n");
    //         break;
    //     case 2:
    //         printf("Two\n");
    //         break;
    //     default:
    //         printf("Sorry\n");
    // }

    // non ternary conditions
    int y = get_int("y:");
    if (y==1)
    {
        printf("y is %i\n", y);
    }
    else
    {
        printf("I dont' know y\n");
    }


    // ternary equivalent of the above
    int z = get_int("z:");
    (z == 1) ? printf("z is %i\n", z) : printf("I don't know z\n");
}