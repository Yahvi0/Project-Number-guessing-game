#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num;

    // Seed the random number generator
    srand(time(0));

    // Generate one random number between 1 and 100
    int random_num = (rand() % 100) + 1;
    int guesses_no=0; // total no. of guesses
    int guessed; // guessed no.

    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed);
        if(guessed>random_num){
            printf("Lower your number please!\n");
        }
        else if(guessed<random_num){
            printf("Higher your number please!\n");
        }
        guesses_no+=1;
    } while (guessed!=random_num);
    
    printf("You guessed the no. in %d turns!!\n", guesses_no);

    return 0;
}
