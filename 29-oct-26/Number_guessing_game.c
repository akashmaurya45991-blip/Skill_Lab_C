#include<stdio.h>

int main()
{
    int secret = 25;
    int guess;
    int attempts = 0;

    printf("=== NUMBER GUESSING GAME ===\n");
    printf("Guess a number between 1 and 50: ");

    scanf("%d", &guess);

    while (guess != secret)
    {
        attempts++;
        if (guess > secret)
        {
            printf("Too high! try again.\n");
        }
        else
        {
            printf("Too low! try again.\n");
        }
        printf("\nGuess a number between 1 and 50: ");
        scanf("%d", &guess);
    }
    attempts++;

    printf("\nCongratulations! you guessed the correct number.\n");
    printf("Total attempts: %d\n", attempts);

    printf("=== GAME OVER ===");

    return 0;
}