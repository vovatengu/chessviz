#include <stdio.h>

#include <stdio.h>

char numbers[8] = {8, 7, 6, 5, 4, 3, 2, 1};
char desk[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                   {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                   {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                   {'R', 'N', 'B', 'K', 'Q', 'B', 'N', 'R'}};

void printdesk()
{
    int i, j;
    for (i = 0; i < 8; i++) {
        printf("%d ", numbers[i]);
        for (j = 0; j < 8; j++) {
            printf("%c ", desk[i][j]);
        }
        printf("\n");
    }
    printf("  ");
    for (i = 0; i < 8; i++)
        printf("%c ", i + 97);
    printf("\n");
}

int main()
{
    return 0;
}
