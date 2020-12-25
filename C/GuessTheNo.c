#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*Generating the random number------Code given by intructor*/
    time_t t;
    srand((unsigned)time(&t));
    int randomNumber = rand() % 21; //To limit nos. upto 20

    /*My code starts below*/

    int guess = 0;
    int n = 5;

checkpoint1:

    if (n < 1)
    {
        printf("\n\nSorry, you could'nt guess the number");
        goto checkpoint2;
    }

    printf("\n\nGuess a number between 01-20 (both inclusive) :");
    scanf("%i", &guess);

    if (guess < 1 || guess > 20)
    {
        goto checkpoint1;
    }

    else if (guess > 0 && guess < 21)
    {
        if (guess > randomNumber)
        {
            printf("\n\nMy number is less than that");
            n--;
            printf("\n\nYou have %i attempt%s left", n, n == 1 ? "" : "s");
            goto checkpoint1;
        }
        else if (guess < randomNumber)
        {
            printf("\n\nMy number is more than that");
            n--;
            printf("\n\nYou have %i attempt%s left", n, n == 1 ? "" : "s");
            goto checkpoint1;
        }
        else if (guess == randomNumber)
        {
            printf("\n\nCongratulations, you guessed the number !!!");
            goto checkpoint2;
        }
    }

checkpoint2:

    printf("\n\nThe correct answer is %i\n\n", randomNumber);
    return 0;
}