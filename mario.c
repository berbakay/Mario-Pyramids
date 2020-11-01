#include <stdio.h>
#include <cs50.h>

int main() 
{
    int height = get_int("height: ");

    while (height > 8 || height < 1) 
    {
        height = get_int("height: ");
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = i + 1; j < height; j++)
        {
            printf(" ");
        }

        for (int k = i + 1; k > 0; k--)
        {
            printf("#");
        }

        printf("  ");

        for (int j = i + 1; j > 0; j--) 
        {
            printf("#");
        }

        printf("\n");
    }
}