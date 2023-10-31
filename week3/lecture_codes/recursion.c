#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Get height: ");
    draw(height);
}

// void draw(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("#");
//     }
//     printf("\n");
//     draw(n + 1);
// }
void draw(int n)
{
    if (n <= 0)
    {
        return;
    }
    draw(n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}