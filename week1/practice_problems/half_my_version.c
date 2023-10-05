#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get bill before tax and tip
    float bill = get_float("Bill before tax and tip: ");

    // get sale tax percent
    float sale_tax = get_float("Sale Tax Percent: ");

    // get Tip percent
    float tip_percent = get_float("Tip percent: ");

    // calculate payments
    float init_payment = bill + (bill * sale_tax/100);
    float total_payemnt = init_payment + (init_payment * tip_percent/100);

    float each_payment = total_payemnt / 2;

    printf("You will owe $%.2f each\n", each_payment);
}

// float calculate_init_payment(float )