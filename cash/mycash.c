#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float owed;
    int coins = 0, num = 0, rem = 0;
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;

    // get amount of change owed and check that it is greater than 0
    do
    {
        owed = get_float("Cash owed: ");
    }
    while(owed < 0);

    printf("You are owed $%.2f in change\n", owed);

    // convert amount owed to cents
    int cents = round(owed * 100);

    printf("That is equivalent to %d cents\n", cents);

    // get number of quarters
    quarters = cents / 25;
    rem = cents % 25;

    printf("#quarters: %i, change remaining: %i\n", quarters, rem);
    cents = rem;

    // get number of dimes
    dimes = cents / 10;
    rem = cents % 10;

    printf("#dimes: %i, change remaining: %i\n", dimes, rem);
    cents = rem;

    // get number of nickels
    nickels = cents / 5;
    rem = cents % 5;

    printf("#nickels: %i, change remaining: %i\n", nickels, rem);
    cents = rem;

    // remainder is number of pennies
    pennies = cents / 1;
    rem = cents % 1;

    printf("#pennies: %i, change remaining: %i\n", pennies, rem);
    cents = rem;

    coins = quarters + dimes + nickels + pennies;
    printf("%d\n", coins);

}