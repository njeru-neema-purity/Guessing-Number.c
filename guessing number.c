#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, attempts = 0;

    srand((unsigned int) time(NULL));
    secret = rand() % 20 + 1;

    printf("Guess a number between 1 and 20.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if (guess > secret) {
            printf("Too high!\n");
        } else if (guess < secret) {
            printf("Too low!\n");
        } else {
            printf("Congratulations!\n");
            printf("Total attempts: %d\n", attempts);
        }

    } while (guess != secret);

    return 0;
}