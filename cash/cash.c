#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float owed;
    int cents;
    int coins = 0;

    // get amount of change owed and check that it is greater than 0
    do
    {
        owed = get_float("Cash owed: ");
    }
    while (owed < 0);

    // convert amount owed to cents
    cents = round(owed * 100);

    // get number of quarters
    coins = coins + cents / 25;
    cents = cents % 25;

    // get number of dimes
    coins = coins + cents / 10;
    cents = cents % 10;

    // get number of nickels
    coins = coins + cents / 5;
    cents = cents % 5;

    // remainder is number of pennies
    coins = coins + cents;

    printf("%d\n", coins);

}