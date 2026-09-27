#include <stdio.h>

int main() {
    int player1, player2;

    printf("Enter Player 1 choice (1-Rock, 2-Paper, 3-Scissors): ");
    scanf("%d", &player1);

    printf("Enter Player 2 choice (1-Rock, 2-Paper, 3-Scissors): ");
    scanf("%d", &player2);

    if (player1 < 1 || player1 > 3 || player2 < 1 || player2 > 3) {
        printf("Invalid Input\n");
    } else if (player1 == player2) {
        printf("Draw\n");
    } else {
        switch (player1) {
            case 1:
                if (player2 == 3)
                    printf("Player 1 Wins\n");
                else
                    printf("Player 2 Wins\n");
                break;
            case 2:
                if (player2 == 1)
                    printf("Player 1 Wins\n");
                else
                    printf("Player 2 Wins\n");
                break;
            case 3:
                if (player2 == 2)
                    printf("Player 1 Wins\n");
                else
                    printf("Player 2 Wins\n");
                break;
        }
    }

    return 0;
}
