#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // int x = get_int("x: ");
    // int y = get_int("y: ");
    long x = get_long("x: ");
    long y = get_long("y: ");

    // float z = x/y;
    // float z = (float) x / (float) y;
    double z = (double) x / (double) y;

    // printf("%li\n", x/y);
    // printf("%f\n", z);
    printf("%.20f\n", z);
}