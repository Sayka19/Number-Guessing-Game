#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int random,guess;
    int no_of_guess=0;
    srand(time(NULL));
    printf("****Welcome to the Number Guessing Game****\n");
    random=rand()%100+1;
    do
    {
        printf("\nPlease Enter Your Guess between 1 to 100:");
        scanf("%d",&guess);
        no_of_guess++;
        if(guess<random)
        {
            printf("\nGuess a Larger Number.\n");
        }
        else if(guess>random)
        {
            printf("\nGuess a Smaller Number.\n");
        }
        else
        {
            printf("\nCongratulations!!You've Guessed the Correct Number in %dth Attempt.\n",no_of_guess);
        }
    }while(guess!=random);
    printf("\nThanks For Playing.\n");
    return 0;
}
