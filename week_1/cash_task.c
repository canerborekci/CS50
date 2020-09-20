#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float dolar;
    do
    {
        dolar = get_float("Change owed: ");
    }
    while (dolar <= 0);
    int cents = round(dolar * 100);
    int coins = 0;
    int quarters = 25;
    int dimes = 10;
    int nickels = 5;
    int pennies = 1;

    coins += cents / quarters;
    cents = cents % quarters;
    coins += cents / dimes;
    cents = cents % dimes;
    coins += cents / nickels;
    cents = cents % nickels;
    coins += cents / pennies;
    cents = cents % pennies;
    printf("%i\n",coins);
    
    
}
