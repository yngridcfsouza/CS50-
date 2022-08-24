#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)

{
    float value;

    // Get a float number with the user
    do
    {
        value = get_float("Change: ");
    }
    while (value < 0);

    // Give the change to the user
    int change = round(value * 100);
    {
        printf("Cents: %i\n", change);
    }

    int rest, count;
    int counter = 0;
    {
        if (change >= 25)
        {
            do
            {
                change = change - 25;
                counter = counter + 1;
            }
            while (change >= 25);
        }
        if (change >= 10)
        {
            do
            {
                change = change - 10;
                counter = counter + 1;
            }
            while (change >= 10);
        }
        if (change >= 5)
        {
            do
            {
                change = change - 5;
                counter = counter + 1;
            }
            while (change >= 5);
        }
        if (change >= 1)
        {
            do
            {
                change = change - 1;
                counter = counter + 1;
            }
            while (change > 0);
        }
    }
    {
        printf("You gonna need %i coins!\n", counter);
    }
}