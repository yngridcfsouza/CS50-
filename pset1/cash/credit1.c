#include <cs50.h>
#include <stdio.h>

int main (void)

{
    // Get a credit card number from user
    long card;
    do
    {
        card = get_long ("Insert the card number (numbers only): ");
    }
    while (card < 10e12);
    // Checksum the credit card
    int d, i, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16;
        // American Express Card
        if (card >= 3.4 * 10e13 && card < 3.8 * 10e13)
        {
            d = 15;
            d1 = card / (10e13);
            d2 = (card - d1 * 10e13)/(10e12);
            d3 = (card - d1 * 10e14 - d2 * 10e13 )/(10e12);
            d4 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12)/(10e11);
            d5 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11)/(10e10);
            d6 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10)/(10e9);
            d7 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9)/(10e8);
            d8 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8)/(10e7);
            d9 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8 - d8 * 10e7)/(10e6);
            d10 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8 - d8 * 10e7 - d9 * 10e6)/(10e5);
            d11 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8 - d8 * 10e7 - d9 * 10e6 - d10 * 10e5)/(10e4);
            d12 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8 - d8 * 10e7 - d9 * 10e6 - d10 * 10e5 - d11 * 10e4)/(10e3);
            d13 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8 - d8 * 10e7 - d9 * 10e6 - d10 * 10e5 - d11 * 10e4 - d12 * 10e3)/(10e2);
            d14 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8 - d8 * 10e7 - d9 * 10e6 - d10 * 10e5 - d11 * 10e4 - d12 * 10e3 - d13 * 10e2)/(10e1);
            d15 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8 - d8 * 10e7 - d9 * 10e6 - d10 * 10e5 - d11 * 10e4 - d12 * 10e3 - d13 * 10e2 - d14 * 10e1);
            printf("digits = %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i and %i\n", d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15);
        }
        if (card >= 3.4 * 10e13 && card < 3.8 * 10e13)
        {
            d = 15;
            d1 = card / (10e13);
            d2 = (card - d1 * 10e13)/(10e12);
            d3 = (card - d1 * 10e13 - d2 * 10e12 )/(10e11);
            d4 = (card - d1 * 10e13 - d2 * 10e12 - d3 * 10e11)/(10e10);
            d5 = (card - d1 * 10e13 - d2 * 10e12 - d3 * 10e11 - d4 * 10e10)/(10e9);
            d6 = (card - d1 * 10e13 - d2 * 10e12 - d3 * 10e11 - d4 * 10e10 - d5 * 10e9)/(10e8);
            d7 = (card - d1 * 10e13 - d2 * 10e12 - d3 * 10e11 - d4 * 10e10 - d5 * 10e9 - d6 * 10e8)/(10e7);
            d8 = (card - d1 * 10e13 - d2 * 10e12 - d3 * 10e11 - d4 * 10e10 - d5 * 10e9 - d6 * 10e8 - d7 * 10e7)/(10e6);
            d9 = (card - d1 * 10e13 - d2 * 10e12 - d3 * 10e11 - d4 * 10e10 - d5 * 10e9 - d6 * 10e8 - d7 * 10e7 - d8 * 10e6)/(10e5);
            d10 = (card - d1 * 10e13 - d2 * 10e12 - d3 * 10e11 - d4 * 10e10 - d5 * 10e9 - d6 * 10e8 - d7 * 10e7 - d8 * 10e6 - d9 * 10e5)/(10e4);
            d11 = (card - d1 * 10e13 - d2 * 10e12 - d3 * 10e11 - d4 * 10e10 - d5 * 10e9 - d6 * 10e8 - d7 * 10e7 - d8 * 10e6 - d9 * 10e5 - d10 * 10e4)/(10e3);
            d12 = (card - d1 * 10e13 - d2 * 10e12 - d3 * 10e11 - d4 * 10e10 - d5 * 10e9 - d6 * 10e8 - d7 * 10e7 - d8 * 10e6 - d9 * 10e5 - d10 * 10e4 - d11 * 10e3)/(10e2);
            d13 = (card - d1 * 10e13 - d2 * 10e12 - d3 * 10e11 - d4 * 10e10 - d5 * 10e9 - d6 * 10e8 - d7 * 10e7 - d8 * 10e6 - d9 * 10e5 - d10 * 10e4 - d11 * 10e3 - d12 * 10e2)/(10e1);
            d14 = (card - d1 * 10e13 - d2 * 10e12 - d3 * 10e11 - d4 * 10e10 - d5 * 10e9 - d6 * 10e8 - d7 * 10e7 - d8 * 10e6 - d9 * 10e5 - d10 * 10e4 - d11 * 10e3 - d12 * 10e2 - d13 * 10e1)/(10e0);
            d15 = (card - d1 * 10e13 - d2 * 10e12 - d3 * 10e11 - d4 * 10e10 - d5 * 10e9 - d6 * 10e8 - d7 * 10e7 - d8 * 10e6 - d9 * 10e5 - d10 * 10e4 - d11 * 10e3 - d12 * 10e2 - d13 * 10e1 - d14 * 10e0);
            printf("digits = %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i, %i and %i\n", d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15);
        }
}