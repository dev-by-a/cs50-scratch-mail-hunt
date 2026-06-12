#include <cs50.h>
#include<stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("error\n");
        return 1;
    }

    if(strlen(argv[1]) != 26)
    {
        printf("error\n");
        return 1;
    }

    int seen[26] = {0};

    for(int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if(!isalpha(argv[1][i]))
        {
            printf("error\n");
            return 1;
        }

        int index = toupper(argv[1][i]) - 'A';

        if(seen[index] == 1)
        {
            printf("error\n");
            return 1;
        }
        else
        {
            seen[index] = 1;
        }
    }

    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");

    for(int j = 0, m = strlen(plaintext); j < m; j++)
    {
        if(isalpha(plaintext[j]))
        {
           int index = toupper(plaintext[j]) - 'A';

            if(isupper(plaintext[j]))
            {
                printf("%c", toupper(argv[1][index]));
            }
            else
            {
                printf("%c", tolower(argv[1][index]));
            }
        }
        else
        {
            printf("%c", plaintext[j]);
        }
    }
    printf("\n");
    return 0;

}
