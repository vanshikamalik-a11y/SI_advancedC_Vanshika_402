#include <stdio.h>
#include <stdlib.h>

int main()
{
    int user_choice;
    int computer_choice;
    int user_score = 0;
    int computer_score = 0;
    int choice;

    printf("*********************************\n");
    printf("*** ROCK PAPER SCISSOR GAME ***\n");
    printf("*********************************\n");

    do
    {
        printf("\nEnter your choice:\n");
        printf("1. Rock\n");
        printf("2. Paper\n");
        printf("3. Scissor\n");
        printf("Choice: ");
        scanf("%d", &user_choice);

        while (user_choice < 1 || user_choice > 3)
        {
            printf("Invalid entry! Enter choice again: ");
            scanf("%d", &user_choice);
        }

        computer_choice = (rand() % 3) + 1;

        if (user_choice == 1)
        {
            printf("\nUser choice: Rock\n");
        }
        else if (user_choice == 2)
        {
            printf("\nUser choice: Paper\n");
        }
        else
        {
            printf("\nUser choice: Scissor\n");
        }

        if (computer_choice == 1)
        {
            printf("Computer choice: Rock\n");
        }
        else if (computer_choice == 2)
        {
            printf("Computer choice: Paper\n");
        }
        else
        {
            printf("Computer choice: Scissor\n");
        }

        
            if (user_choice == computer_choice)
        {
            printf("******Status: Round Draw*******\n");
        }
        else if ((user_choice == 1 && computer_choice == 3) ||
                 (user_choice == 2 && computer_choice == 1) ||
                 (user_choice == 3 && computer_choice == 2))
        {
            printf("Status: User wins this round\n");
            user_score++;
        }
        else
        {
            printf("*******Status: Computer wins this round*******\n");
            computer_score++;
        }

        printf("********Current Score -> User: %d, Computer: %d\n", user_score, computer_score);

        printf("\nDo you want to continue? (1 for Yes / 0 for No): ");
        scanf("%d", &choice);

    } while (choice == 1);

    printf("\n*********************************\n");
    printf("********** FINAL RESULT *********\n");
    printf("*********************************\n");
    printf("Total User Score: %d\n", user_score);
    printf("Total Computer Score: %d\n", computer_score);

    if (user_score > computer_score)
    {
        printf("Winner: User\n");
    }
    else if (computer_score > user_score)
    {
        printf("Winner: Computer\n");
    }
    else
    {
        printf("Winner: None (Draw)\n");
    }
    printf("*********************************\n");

    return 0;
}