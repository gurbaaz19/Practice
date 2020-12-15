#include <stdio.h>
#include <stdlib.h>

void BOARD(void);
void CLEARSCREEN(void);

char board[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int main()
{   
    int w=0;
    CLEARSCREEN();
    BOARD();

    while (1)
    {
        int n = 0;
        printf("Player 1:");
        scanf("%d", &n);
        while ((n < 1 || n > 9) || (board[n]=='X') || (board[n]=='O'))
        {
            printf("Enter a Valid Number: ");
            scanf("%d", &n);
        }

        board[n] = 'X';
        CLEARSCREEN();
        BOARD();

        if (((board[1] == 'X') && (board[2] == 'X') && (board[3] == 'X')) ||
            ((board[1] == 'X') && (board[4] == 'X') && (board[7] == 'X')) ||
            ((board[1] == 'X') && (board[5] == 'X') && (board[9] == 'X')) ||
            ((board[2] == 'X') && (board[5] == 'X') && (board[8] == 'X')) ||
            ((board[3] == 'X') && (board[6] == 'X') && (board[9] == 'X')) ||
            ((board[3] == 'X') && (board[5] == 'X') && (board[7] == 'X')) ||
            ((board[4] == 'X') && (board[5] == 'X') && (board[6] == 'X')) ||
            ((board[7] == 'X') && (board[8] == 'X') && (board[9] == 'X')))
        {
            printf("Player 1 wins\n");
            w=1;
            break;
        }

        else if ((board[1] != '1' && 
                  board[2] != '2' && 
                  board[3] != '3' && 
                  board[4] != '4' && 
                  board[5] != '5' && 
                  board[6] != '6' && 
                  board[7] != '7' && 
                  board[8] != '8' && 
                  board[9] != '9'))
        {
            break;
        }

        else
        {
            int n = 0;
            printf("Player 2:");
            scanf("%d", &n);
            for (; (n < 1 || n > 9) || (board[n]=='X') || (board[n]=='O');)
            {
                printf("Enter a Valid Number: ");
                scanf("%d", &n);
            }

            board[n] = 'O';
            CLEARSCREEN();
            BOARD();

            if (((board[1] == 'O') && (board[2] == 'O') && (board[3] == 'O')) ||
                ((board[1] == 'O') && (board[4] == 'O') && (board[7] == 'O')) ||
                ((board[1] == 'O') && (board[5] == 'O') && (board[9] == 'O')) ||
                ((board[2] == 'O') && (board[5] == 'O') && (board[8] == 'O')) ||
                ((board[3] == 'O') && (board[6] == 'O') && (board[9] == 'O')) ||
                ((board[3] == 'O') && (board[5] == 'O') && (board[7] == 'O')) ||
                ((board[4] == 'O') && (board[5] == 'O') && (board[6] == 'O')) ||
                ((board[7] == 'O') && (board[8] == 'O') && (board[9] == 'O')))
            {
                printf("Player 2 wins\n");
                w=1;
                break; 
            }
        }
    }
    if (w==0)
    {
        printf("Draw\n");
    }
    
    return 0;
}

void BOARD(void)
{
    printf("\t\tTic Tac Toe\t\t\n\n");
    printf("Player 1 (X)  -  Player 2 (O)\n\n");
    printf("      |      |      \n");
    printf("  %c   |  %c   |  %c   \n", board[1], board[2], board[3]);
    printf("______|______|______\n");
    printf("      |      |      \n");
    printf("  %c   |  %c   |  %c   \n", board[4], board[5], board[6]);
    printf("______|______|______\n");
    printf("      |      |      \n");
    printf("  %c   |  %c   |  %c   \n", board[7], board[8], board[9]);
    printf("      |      |      \n");
    return;
}

void CLEARSCREEN(void)
{
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("\n\n\n\n\n\n\n\n\n\n");
    }

    return;
}