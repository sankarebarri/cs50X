#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

float half(float bill, float tax, int tip)
{
    // calculate payments
    float init_payment = bill + (bill * tax / 100);
    float total_payemnt = init_payment + (init_payment * tip / 100);

    float each_payment = total_payemnt / 2;
    return each_payment;
}