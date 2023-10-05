#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // int score1 = 73;
    // int score2 = 71;
    // int score3 = 31;

    int scores[3];

    // scores[0] = 73;
    // scores[1] = 74;
    // scores[2] = 44;

    for (int i = 0; i < 3; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // printf("Average: %i \n", (score1 + score2 + score3) / 3);
    // printf("Average: %f \n", (score1 + score2 + score3) / 3.0);
    // printf("Average: %f \n", (score1 + score2 + score3) / (float) 3);
    printf("Average: %f \n", (scores[0] + scores[1] + scores[2]) / (float) 3);
}