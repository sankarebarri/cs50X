#include <stdio.h>


float global = 0.5;
void triple(void);

int main(void)
{
    triple();
    printf("%f\n", global);
}

void triple(void)
{
    global *= 3;
}