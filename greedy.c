/* This program asks the user for an integer and then calculates the least amount of coins to return to the user, using only cents */

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // Declare variables.
    int money = 0;
    int cents;
    float change;
    
    // Do loop that keeps asking how much change is owed if the change value is invalid.
    // The change input is multiplied by 100 using a 'round' variable found on:
    // https://cs50.harvard.edu/resources/cppreference.com/stdmath/round.html
    do
    {
        printf("O hai! How much change is owed? ");
        change = GetFloat();
        cents = round(change *100);
    } while (change < 0);
    
    // While loop with 25, 10, 5 and 1 cent coins decrementing from integer 'cents' value.
    // Everytime a 25, 10, 5 and or 1 cent is used to subtract from integer 'cents' value,
    // the integer 'money' increments by 1.
    while (cents >= 25)
        {
            cents = cents - 25;
            money++;
        }
    while (cents >= 10)
        {
            cents = cents - 10;
            money++;
        }
    while (cents >= 5)
        {
            cents = cents - 5;
            money++;
        }
    while (cents > 0)
        {
            cents = cents - 1;
            money++;
        }
        
    // Printf that gives the total amount of coins used with integer 'money'.
    printf("%i\n", money);
    
    return 0;
}