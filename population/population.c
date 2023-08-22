#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int startsize, endsize, years = 0;
    // TODO: Prompt for start size
    do
    {
        startsize = get_int("Start Size: ");
    }
    while (startsize < 9);

    // TODO: Prompt for end size
    do
    {
        endsize = get_int("End Size:");

    }
    while (endsize < startsize);

    // TODO: Calculate number of years until we reach threshold
    int population = startsize;
    while (population < endsize)
    {
        int newLlamas = population / 3;
        int passedAway = population / 4;
        population += newLlamas - passedAway;
        years++;
    }

    // TODO: Print number of years
    printf("Years: %d\n", years);
}
