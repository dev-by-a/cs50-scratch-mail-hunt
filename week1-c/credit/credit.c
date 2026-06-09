#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long number = get_long("Number: ");

    long temp = number;
    int sum = 0;
    int position = 0; // just a counter that remembers how many digits are processed so far

    while (temp > 0)
    {
        int digit = temp % 10; // grabs the last digit

        if (position % 2 == 0)
        {
            sum = sum + digit; // this is the odd position from the right
        }
        else
        {
            int doubled = digit * 2;
            sum = sum + (doubled % 10) + (doubled / 10);
        }

        temp = temp / 10; // chop off the last digit
        position++;       // moves to next postion
    }

    int count = 0;
    long temp2 = number;
    while (temp2 > 0)
    {
        temp2 = temp2 / 10;
        count++;
    }

    long first_two = number;
    while (first_two >= 100)
    {
        first_two = first_two / 10;
    }

    int first_one = first_two / 10;

    if (sum % 10 != 0)
    {
        printf("INVALID\n");
    }
    else if (count == 15 && (first_two == 34 || first_two == 37))
    {
        printf("AMEX\n");
    }
    else if (count == 16 && first_two >= 51 && first_two <= 55)
    {
        printf("MASTERCARD\n");
    }
    else if ((count == 13 || count == 16) && (first_one == 4))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}
