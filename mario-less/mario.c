#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Getting input
    int height=0;
    do
    {
    height = get_int("Height:");
    }
    while(height > 8 || height < 1);

    for (int i = 1; i <= height; i++)
        {
            
        // Print spaces
        for (int j = 1; j <= height - i; j++)
        {
            printf(" ");
        }

        // Print '#'
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }

        printf("\n");
        }
    }