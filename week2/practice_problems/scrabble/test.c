#include <stdio.h>
#include <cs50.h>
#include <string.h>

// int return_array(int number);
int main(void)
{
    // int num = get_int("Number: ");
    // int arr = return_array(num);
    // for (int j = 0; j < 5; j++)
    // {
    //     printf("%i", arr[j]);
    // }
    // printf("%d \n", 0b101);
    string text = get_string("Text: ");
    int key = 1;
    int j;
    for (int i = 0; i < 5; i++)
    {

        j = text[i];
        if (j < 90)
        {
            // printf("%c", text[i]);
            printf("%c", j+1);
        }
        else if (j > 89)
        {
            j = j % 90;
            // printf("%c", text[i]);
            printf("%c", j+65);

        }
        
    }
    printf("\n");
}

// int return_array(int number)
// {
//     int array[5];
//     for (int i = 0; i < 5; i++)
//     {
//         array[i] = i*i;
//     }
//     return 0;
// }

