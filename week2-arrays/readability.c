#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

float L, avg_L, avg_S, S, W, grade;

int main(void)
{
    string text = get_string("Text: ");
    W = 1;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if(isalpha(text[i]))
        {
            L++;
        }
        if(text[i] == '.' || text[i] == '?' || text[i] == '!' )
        {
            S++;
        }
        if(text[i] == ' ')
        {
            W++;
        }
    }

    avg_L = L / W * 100;
    avg_S = S / W * 100;
    grade = 0.0588 * avg_L - 0.296 * avg_S - 15.8;

    if(grade < 1)
    printf("Before Grade 1\n");
    else if(grade >= 16)
    printf("Grade 16+\n");
    else
    printf("Grade %i\n", (int) round(grade));
}



