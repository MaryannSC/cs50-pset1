#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    // get height from user, must be between 1 and 8, inclusive
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);


    for (int i = 0; i < height; i++)
    {
        // generate spaces
        for (int j = 0; j < height - 1 - i; j++)
        {
            printf(" ");
        }
        // generate # symbols
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        // next line
        printf("\n");
    }

}