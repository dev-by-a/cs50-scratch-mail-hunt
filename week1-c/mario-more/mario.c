#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        height = get_int("Height: ");
    }
    while( height < 1 || height > 8 );

    //for rows
    for (int i = 1; i <= height; i++)
    {
        //prints spaces
        for(int j = 0; j < height-i; j++)
        {
            printf(" ");
        }
        // left hashes
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        //prints gap
        printf("  ");

        // right hashes
        for (int j = 0; j < i; j++)
        {
            printf("#");
        }

        // prints next line
        printf("\n");
    }
}

