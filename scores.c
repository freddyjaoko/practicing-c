#include <cs50.h>
#include <stdio.h>

const int N = 3;

float avarage(int array[]);

int main(void)
{
    int score[3];
    for(int i=0; i<3; i++)
    {
        score[i] = get_int("Score:");
    }

    printf("Avarage: %f\n", avarage(score));
}

float avarage(int array[])
{
    int sum = 0;
    for(int i=0; i<N; i++)
    {
        sum += array[i];
    }
    return sum/ (float)N;
}