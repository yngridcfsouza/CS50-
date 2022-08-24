#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height, row, column;
    // Get a integer number between 1 and 8;
    do
    {
     height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    // Building the pyramids;
    for (row = 0; row < height; row++)
    {
        for (column = height - 1; column > row; column--)
        {
                printf(" ");
        }
        for (column = 0; column <= row; column++)
        {
                printf ("#");
        }
            printf("  ");
        for (column = 0; column <= row; column++)
        {
                printf ("#");
        }
            printf("\n");
    }
}