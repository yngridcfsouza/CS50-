#include <cs50.h>
#include <stdio.h>

int main (void)

{
    // Get a credit card number from user
    long card;
    {
        card = get_long ("Insert the card number (numbers only): ");
    }
    // Checksum the credit card
    int d, n , ncheck, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, d13, d14, d15, d16;
    int s, i, j, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16;
    {
        // American Express Card
        if ((card >= 3.4 * 10e13 && card < 3.5 * 10e13) || (card >= 3.7 * 10e13 && card < 3.8 * 10e13))
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
            s2 = d2 * 2;
                if (s2 > 9)
                {
                    i = s2 / 10;
                    j = s2 - 10;
                    s2 = i + j;
                }
            s4 = d4 * 2;
                if (s4 > 9)
                {
                    i = s4 / 10;
                    j = s4 - 10;
                    s4 = i + j;
                }
            s6 = d6 * 2;
                if (s6 > 9)
                {
                    i = s6 / 10;
                    j = s6 - 10;
                    s6 = i + j;
                }
            s8 = d8 * 2;
                if (s8 > 9)
                {
                    i = s8 / 10;
                    j = s8 - 10;
                    s8 = i + j;
                }
            s10 = d10 * 2;
            if (s10 > 9)
                {
                    i = s10 / 10;
                    j = s10 - 10;
                    s10 = i + j;
                }
            s12 = d12 * 2;
            if (s12 > 9)
                {
                    i = s12 / 10;
                    j = s12 - 10;
                    s12 = i + j;
                }
            s14 = d14 * 2;
            if (s14 > 9)
                {
                    i = s14 / 10;
                    j = s14 - 10;
                    s14 = i + j;
                }
            s = s2 + s4 + s6 + s8 + s10 + s12 + s14 + d1 + d3 + d5 + d7 + d9 + d11 + d13 + d15;
            n = s / 10;
            ncheck = s - (n * 10);
                if (ncheck == 0)
                {
                    printf("AMEX\n");
                }
            else
                printf("INVALID\n");
        }
        // Master Card
        else if (card >= 5.1 * 10e14 && card < 5.6 * 10e14)
        {
            d = 16;
            d1 = card / (10e14);
            d2 = (card - d1 * 10e14) / (10e13);
            d3 = (card - d1 * 10e14 - d2 * 10e13) / (10e12);
            d4 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12) / (10e11);
            d5 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11) / (10e10);
            d6 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10) / (10e9);
            d7 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9) / (10e8);
            d8 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8) / (10e7);
            d9 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8 - d8 * 10e7) / (10e6);
            d10 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8 - d8 * 10e7 - d9 * 10e6) / (10e5);
            d11 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8 - d8 * 10e7 - d9 * 10e6 - d10 * 10e5) / (10e4);
            d12 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8 - d8 * 10e7 - d9 * 10e6 - d10 * 10e5 - d11 * 10e4) / (10e3);
            d13 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8 - d8 * 10e7 - d9 * 10e6 - d10 * 10e5 - d11 * 10e4 - d12 * 10e3) / (10e2);
            d14 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8 - d8 * 10e7 - d9 * 10e6 - d10 * 10e5 - d11 * 10e4 - d12 * 10e3 - d13 * 10e2) / (10e1);
            d15 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8 - d8 * 10e7 - d9 * 10e6 - d10 * 10e5 - d11 * 10e4 - d12 * 10e3 - d13 * 10e2 - d14 * 10e1) / (10e0);
            d16 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8 - d8 * 10e7 - d9 * 10e6 - d10 * 10e5 - d11 * 10e4 - d12 * 10e3 - d13 * 10e2 - d14 * 10e1 - d15 * 10e0);
            s1 = d1 * 2;
                if (s1 > 9)
                {
                    i = s1 / 10;
                    j = s1 - 10;
                    s1 = i + j;
                }
            s3 = d3 * 2;
                if (s3 > 9)
                {
                    i = s3 / 10;
                    j = s3 - 10;
                    s3 = i + j;
                }
            s5 = d5 * 2;
                if (s5 > 9)
                {
                    i = s5 / 10;
                    j = s5 - 10;
                    s5 = i + j;
                }
            s7 = d7 * 2;
                if (s7 > 9)
                {
                    i = s7 / 10;
                    j = s7 - 10;
                    s7 = i + j;
                }
            s9 = d9 * 2;
            if (s9 > 9)
                {
                    i = s9 / 10;
                    j = s9 - 10;
                    s9 = i + j;
                }
            s11 = d11 * 2;
            if (s11 > 9)
                {
                    i = s11 / 10;
                    j = s11 - 10;
                    s11 = i + j;
                }
            s13 = d13 * 2;
            if (s13 > 9)
                {
                    i = s13 / 10;
                    j = s13 - 10;
                    s13 = i + j;
                }
            s15 = d15 * 2;
            if (s15 > 9)
                {
                    i = s15 / 10;
                    j = s15 - 10;
                    s15 = i + j;
                }
            s = s1 + s3 + s5 + s7 + s9 + s11 + s13 + s15 + d2 + d4 + d6 + d8 + d10 + d12 + d14 + d16;
            n = s / 10;
            ncheck = s - (n * 10);
                if (ncheck == 0)
                {
                    printf("MASTERCARD\n");
                }
            else
                printf("INVALID\n");
        }
        // Visa Card (It may have 13, 14, 15 or 16 digits)
        else if (card >= 4 * 10e14 && card < 5 * 10e14)
        {
            d = 16;
            d1 = card / (10e14);
            d2 = (card - d1 * 10e14) / (10e13);
            d3 = (card - d1 * 10e14 - d2 * 10e13) / (10e12);
            d4 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12) / (10e11);
            d5 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11) / (10e10);
            d6 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10) / (10e9);
            d7 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9) / (10e8);
            d8 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8) / (10e7);
            d9 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8 - d8 * 10e7) / (10e6);
            d10 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8 - d8 * 10e7 - d9 * 10e6) / (10e5);
            d11 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8 - d8 * 10e7 - d9 * 10e6 - d10 * 10e5) / (10e4);
            d12 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8 - d8 * 10e7 - d9 * 10e6 - d10 * 10e5 - d11 * 10e4) / (10e3);
            d13 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8 - d8 * 10e7 - d9 * 10e6 - d10 * 10e5 - d11 * 10e4 - d12 * 10e3) / (10e2);
            d14 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8 - d8 * 10e7 - d9 * 10e6 - d10 * 10e5 - d11 * 10e4 - d12 * 10e3 - d13 * 10e2) / (10e1);
            d15 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8 - d8 * 10e7 - d9 * 10e6 - d10 * 10e5 - d11 * 10e4 - d12 * 10e3 - d13 * 10e2 - d14 * 10e1) / (10e0);
            d16 = (card - d1 * 10e14 - d2 * 10e13 - d3 * 10e12 - d4 * 10e11 - d5 * 10e10 - d6 * 10e9 - d7 * 10e8 - d8 * 10e7 - d9 * 10e6 - d10 * 10e5 - d11 * 10e4 - d12 * 10e3 - d13 * 10e2 - d14 * 10e1 - d15 * 10e0);
            s1 = d1 * 2;
                if (s1 > 9)
                {
                    i = s1 / 10;
                    j = s1 - 10;
                    s1 = i + j;
                }
            s3 = d3 * 2;
                if (s3 > 9)
                {
                    i = s3 / 10;
                    j = s3 - 10;
                    s3 = i + j;
                }
            s5 = d5 * 2;
                if (s5 > 9)
                {
                    i = s5 / 10;
                    j = s5 - 10;
                    s5 = i + j;
                }
            s7 = d7 * 2;
                if (s7 > 9)
                {
                    i = s7 / 10;
                    j = s7 - 10;
                    s7 = i + j;
                }
            s9 = d9 * 2;
            if (s9 > 9)
                {
                    i = s9 / 10;
                    j = s9 - 10;
                    s9 = i + j;
                }
            s11 = d11 * 2;
            if (s11 > 9)
                {
                    i = s11 / 10;
                    j = s11 - 10;
                    s11 = i + j;
                }
            s13 = d13 * 2;
            if (s13 > 9)
                {
                    i = s13 / 10;
                    j = s13 - 10;
                    s13 = i + j;
                }
            s15 = d15 * 2;
            if (s15 > 9)
                {
                    i = s15 / 10;
                    j = s15 - 10;
                    s15 = i + j;
                }
            s = s1 + s3 + s5 + s7 + s9 + s11 + s13 + s15 + d2 + d4 + d6 + d8 + d10 + d12 + d14 + d16;
            n = s / 10;
            ncheck = s - (n * 10);
                if (ncheck == 0)
                {
                    printf("VISA\n");
                }
            else
                printf("INVALID\n");
        }
        else if (card >= 4 * 10e13 && card < 5 * 10e13)
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
            s2 = d2 * 2;
                if (s2 > 9)
                {
                    i = s2 / 10;
                    j = s2 - 10;
                    s2 = i + j;
                }
            s4 = d4 * 2;
                if (s4 > 9)
                {
                    i = s4 / 10;
                    j = s4 - 10;
                    s4 = i + j;
                }
            s6 = d6 * 2;
                if (s6 > 9)
                {
                    i = s6 / 10;
                    j = s6 - 10;
                    s6 = i + j;
                }
            s8 = d8 * 2;
                if (s8 > 9)
                {
                    i = s8 / 10;
                    j = s8 - 10;
                    s8 = i + j;
                }
            s10 = d10 * 2;
            if (s10 > 9)
                {
                    i = s10 / 10;
                    j = s10 - 10;
                    s10 = i + j;
                }
            s12 = d12 * 2;
            if (s12 > 9)
                {
                    i = s12 / 10;
                    j = s12 - 10;
                    s12 = i + j;
                }
            s14 = d14 * 2;
            if (s14 > 9)
                {
                    i = s14 / 10;
                    j = s14 - 10;
                    s14 = i + j;
                }
            s = s2 + s4 + s6 + s8 + s10 + s12 + s14 + d1 + d3 + d5 + d7 + d9 + d11 + d13 + d15;
            n = s / 10;
            ncheck = s - (n * 10);
                if (ncheck == 0)
                {
                    printf("VISA\n");
                }
            else
                printf("INVALID\n");
        }
        else if (card >= 4 * 10e12 && card < 5 * 10e12)
        {
            d = 14;
            d1 = card / (10e12);
            d2 = (card - d1 * 10e12) / (10e11);
            d3 = (card - d1 * 10e12 - d2 * 10e11) / (10e10);
            d4 = (card - d1 * 10e12 - d2 * 10e11 - d3 * 10e10) / (10e9);
            d5 = (card - d1 * 10e12 - d2 * 10e11 - d3 * 10e10 - d4 * 10e9) / (10e8);
            d6 = (card - d1 * 10e12 - d2 * 10e11 - d3 * 10e10 - d4 * 10e9 - d5 * 10e8) / (10e7);
            d7 = (card - d1 * 10e12 - d2 * 10e11 - d3 * 10e10 - d4 * 10e9 - d5 * 10e8 - d6 * 10e7) / (10e6);
            d8 = (card - d1 * 10e12 - d2 * 10e11 - d3 * 10e10 - d4 * 10e9 - d5 * 10e8 - d6 * 10e7 - d7 * 10e6) / (10e5);
            d9 = (card - d1 * 10e12 - d2 * 10e11 - d3 * 10e10 - d4 * 10e9 - d5 * 10e8 - d6 * 10e7 - d7 * 10e6 - d8 * 10e5) / (10e4);
            d10 = (card - d1 * 10e12 - d2 * 10e11 - d3 * 10e10 - d4 * 10e9 - d5 * 10e8 - d6 * 10e7 - d7 * 10e6 - d8 * 10e5 - d9 * 10e4) / (10e3);
            d11 = (card - d1 * 10e12 - d2 * 10e11 - d3 * 10e10 - d4 * 10e9 - d5 * 10e8 - d6 * 10e7 - d7 * 10e6 - d8 * 10e5 - d9 * 10e4 - d10 * 10e3) / (10e2);
            d12 = (card - d1 * 10e12 - d2 * 10e11 - d3 * 10e10 - d4 * 10e9 - d5 * 10e8 - d6 * 10e7 - d7 * 10e6 - d8 * 10e5 - d9 * 10e4 - d10 * 10e3 - d11 * 10e2) / (10e1);
            d13 = (card - d1 * 10e12 - d2 * 10e11 - d3 * 10e10 - d4 * 10e9 - d5 * 10e8 - d6 * 10e7 - d7 * 10e6 - d8 * 10e5 - d9 * 10e4 - d10 * 10e3 - d11 * 10e2 - d12 * 10e1) / (10e0);
            d14 = (card - d1 * 10e12 - d2 * 10e11 - d3 * 10e10 - d4 * 10e9 - d5 * 10e8 - d6 * 10e7 - d7 * 10e6 - d8 * 10e5 - d9 * 10e4 - d10 * 10e3 - d11 * 10e2 - d12 * 10e1 - d13 * 10e0);
            s1 = d1 * 2;
                if (s1 > 9)
                {
                    i = s1 / 10;
                    j = s1 - 10;
                    s1 = i + j;
                }
            s3 = d3 * 2;
                if (s3 > 9)
                {
                    i = s3 / 10;
                    j = s3 - 10;
                    s3 = i + j;
                }
            s5 = d5 * 2;
                if (s5 > 9)
                {
                    i = s5 / 10;
                    j = s5 - 10;
                    s5 = i + j;
                }
            s7 = d7 * 2;
                if (s7 > 9)
                {
                    i = s7 / 10;
                    j = s7 - 10;
                    s7 = i + j;
                }
            s9 = d9 * 2;
            if (s9 > 9)
                {
                    i = s9 / 10;
                    j = s9 - 10;
                    s9 = i + j;
                }
            s11 = d11 * 2;
            if (s11 > 9)
                {
                    i = s11 / 10;
                    j = s11 - 10;
                    s11 = i + j;
                }
            s13 = d13 * 2;
            if (s13 > 9)
                {
                    i = s13 / 10;
                    j = s13 - 10;
                    s13 = i + j;
                }
            s = s1 + s3 + s5 + s7 + s9 + s11 + s13 + d2 + d4 + d6 + d8 + d10 + d12 + d14;
            n = s / 10;
            ncheck = s - (n * 10);
                if (ncheck == 0)
                {
                    printf("VISA\n");
                }
            else
                printf("INVALID\n");
        }
        else if (card >= 4 * 10e11 && card < 5 * 10e11)
        {
            d = 13;
            d1 = card / (10e11);
            d2 = (card - d1 * 10e11) / (10e10);
            d3 = (card - d1 * 10e11 - d2 * 10e10) / (10e9);
            d4 = (card - d1 * 10e11 - d2 * 10e10 - d3 * 10e9) / (10e8);
            d5 = (card - d1 * 10e11 - d2 * 10e10 - d3 * 10e9 - d4 * 10e8) / (10e7);
            d6 = (card - d1 * 10e11 - d2 * 10e10 - d3 * 10e9 - d4 * 10e8 - d5 * 10e7) / (10e6);
            d7 = (card - d1 * 10e11 - d2 * 10e10 - d3 * 10e9 - d4 * 10e8 - d5 * 10e7 - d6 * 10e6) / (10e5);
            d8 = (card - d1 * 10e11 - d2 * 10e10 - d3 * 10e9 - d4 * 10e8 - d5 * 10e7 - d6 * 10e6 - d7 * 10e5) / (10e4);
            d9 = (card - d1 * 10e11 - d2 * 10e10 - d3 * 10e9 - d4 * 10e8 - d5 * 10e7 - d6 * 10e6 - d7 * 10e5 - d8 * 10e4) / (10e3);
            d10 = (card - d1 * 10e11 - d2 * 10e10 - d3 * 10e9 - d4 * 10e8 - d5 * 10e7 - d6 * 10e6 - d7 * 10e5 - d8 * 10e4 - d9 * 10e3) / (10e2);
            d11 = (card - d1 * 10e11 - d2 * 10e10 - d3 * 10e9 - d4 * 10e8 - d5 * 10e7 - d6 * 10e6 - d7 * 10e5 - d8 * 10e4 - d9 * 10e3 - d10 * 10e2) / (10e1);
            d12 = (card - d1 * 10e11 - d2 * 10e10 - d3 * 10e9 - d4 * 10e8 - d5 * 10e7 - d6 * 10e6 - d7 * 10e5 - d8 * 10e4 - d9 * 10e3 - d10 * 10e2 - d11 * 10e1) / (10e0);
            d13 = (card - d1 * 10e11 - d2 * 10e10 - d3 * 10e9 - d4 * 10e8 - d5 * 10e7 - d6 * 10e6 - d7 * 10e5 - d8 * 10e4 - d9 * 10e3 - d10 * 10e2 - d11 * 10e1 - d12 * 10e0);
            s2 = d2 * 2;
                if (s2 > 9)
                {
                    i = s2 / 10;
                    j = s2 - 10;
                    s2 = i + j;
                }
            s4 = d4 * 2;
                if (s4 > 9)
                {
                    i = s4 / 10;
                    j = s4 - 10;
                    s4 = i + j;
                }
            s6 = d6 * 2;
                if (s6 > 9)
                {
                    i = s6 / 10;
                    j = s6 - 10;
                    s6 = i + j;
                }
            s8 = d8 * 2;
                if (s8 > 9)
                {
                    i = s8 / 10;
                    j = s8 - 10;
                    s8 = i + j;
                }
            s10 = d10 * 2;
            if (s10 > 9)
                {
                    i = s10 / 10;
                    j = s10 - 10;
                    s10 = i + j;
                }
            s12 = d12 * 2;
            if (s12 > 9)
                {
                    i = s12 / 10;
                    j = s12 - 10;
                    s12 = i + j;
                }
            s = s2 + s4 + s6 + s8 + s10 + s12 + d1 + d3 + d5 + d7 + d9 + d11 + d13;
            n = s / 10;
            ncheck = s - (n * 10);
                if (ncheck == 0)
                {
                    printf("VISA\n");
                }
            else
                printf("INVALID\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
}