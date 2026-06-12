#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int points[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);

int main(void)
{
    string person1 = get_string("Person 1: ");
    string person2 = get_string("Person 2: ");

    int score1 = compute_score(person1);
    int score2 = compute_score(person2);

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
     else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }


}

int compute_score(string word)
{
    int score = 0;
    int l = strlen(word);

    for (int i = 0; i < l; i++)
    {
        if (isalpha(word[i]))
        {
           score += points[toupper(word[i]) - 'A'];
        }
    }
    return score;
}
