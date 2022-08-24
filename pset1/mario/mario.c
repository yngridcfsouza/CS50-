#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height, row, column;
    // Get a integer number between 1 and 8
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);
    // Printing the pyramid
    for (row = 0; row < height; row++)
    {
        for (column = 0; column < height; column++)
        {
            if (row + column < height - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("  ");
        for (column = 0; column < height; column++)
        {
            if (row + column > height - 2)
            {
                printf("#");
            }
        }
        printf("\n");
    }
}