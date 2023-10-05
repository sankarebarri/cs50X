#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get start and end size
    int start_size;
    do
    {
        start_size = get_int("Start Size: ");
    }
    while (start_size < 9);

    int years = 0;
    int end_size;
    do
    {
        end_size = get_int("End Size: ");
    }
    while(end_size < start_size);
    
    
    while (start_size < end_size)
    {
        start_size = start_size + (start_size / 3) - (start_size / 4);
        years++;
        printf("Size %i in Year %i\n", start_size, years);
    }
    printf("Years %i\n", years);

    //
}