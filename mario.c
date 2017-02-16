/* This program calculates Mario's score after he jumps on the pyramid */

#include <stdio.h>
#include <cs50.h>

int main()
{
    // Declare variables
    int height;
    int row;
    int space;
    int hash;
    
    // Ask for height with a loop triggered after invalid integer input.
    do
    {
        printf("Height: ");
        height = GetInt();
    } while (height < 0 || height > 23);
    
    // Adds row value of the pyramid.
    for (row = height; row > 0; row--)
    {
        
    // Declare space and hash values and how this should be calculated.
        hash = height - (row - 1);
        space = height - (hash + 1);
        
        
        // Adds integer 'x' to add space and hash values using printf in the inner 'for' loops.
        for (int x = 0; x <= space; x++)
            {
                printf(" ");
            }
        for (int x = 0; x <= hash; x++)
            {
                printf("#");
            }
            printf("\n");
    }
    return 0;
}