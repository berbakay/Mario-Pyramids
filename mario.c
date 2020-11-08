#include <stdio.h>
#include <cs50.h>

int main() 
{
    int height = get_int("height: "); //get height from user 

    while (height > 8 || height < 1) //test if height is between 1 and 8, if not ask for height again.
    {
        height = get_int("height: ");
    }

    for (int i = 0; i < height; i++) //loop number of times given by user
    {
        for (int j = i + 1; j < height; j++) //print number of spaces at start of line 
        {
            printf(" ");
        }

        for (int k = i + 1; k > 0; k--) //print first set of hashes in line
        {
            printf("#");
        }

        printf("  "); //print 2 center spaces

        for (int j = i + 1; j > 0; j--) //print final hashes
        {
            printf("#");
        }

        printf("\n");
    }
}