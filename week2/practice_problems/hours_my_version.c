#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

float return_result(int weeks);

int main(void)
{
    // int weeks = 3;
    int week_length;
    do
    {
        week_length = get_int("Number of weeks taking CS50: ");
    }
    while (week_length < 1 || week_length > 11);
    printf("%.1f\n", return_result(week_length));
    
}

int calc_hours(int weeks[], int week_length)
{
    int sum = 0;
    for (int i = 0; i < week_length; i++)
    {
        sum += weeks[i];
    }
    return sum;
}

float return_result(int week_length)
{
    int hours[week_length];

    for (int i = 0; i < week_length; i++)
    {
        hours[i] = get_int("Week %i HW Hours: ", i);
    }
    printf("A for avearge, T for total: ");
    char answer = get_char("Answer: ");

    if (toupper(answer) == 'T')
    {
        return calc_hours(hours, week_length);
    }
    else if (toupper(answer) == 'A')
    {
        int total_hours = calc_hours(hours, week_length);
        return total_hours / (float) week_length;
    }
}