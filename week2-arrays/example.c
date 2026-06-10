#include <cs50.h>
#include <stdio.h>

float average(int length, int numbers[]);


int main(void)
{
    const int N = 3;
    int scores[N];
    for(int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", average(N, scores));
}

float average(int length, int numbers[]) // when you create your own function that takes an array as input you have to take as input the length of the array and also need to pass in the array itself
{                                        // when passing an array, you specifiy the type of values in array, whatever you want to name the array and then use empty square brackets
    int sum = 0;
    for(int i = 0; i < length; i++)

    {
        sum += numbers[i];
    }
    return sum / (float) length;
}

