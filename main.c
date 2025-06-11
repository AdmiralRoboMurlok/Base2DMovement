#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void grid(int head_row, int head_col) {
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i == head_row && j == head_col)
            {
                printf("X");
            }else { printf("O"); }
        }
        printf("\n");
    }
}

void running(){
    bool execute = true;

    int head_row = 2;
    int head_col = 2;

    grid(head_row, head_col);

    char input;

    while (execute)
    {
        scanf(" %c", &input);
        if (input == 'a')
        {
            if (head_col > 0){
                head_col--;
                system("clear");
                grid(head_row, head_col);
            }
            else { printf("Za daleko"); }
        }
        else if (input == 'd')
        {
            if (head_col < 5) {
                head_col++;
                system("clear");
                grid(head_row, head_col);
            }
            else { printf("Za daleko"); }
        }
        else if (input == 'w')
        {
            if (head_row > 0) {
                head_row--;
                system("clear");
                grid(head_row, head_col);
            }
            else { printf("Za daleko"); }
        }
        else if (input == 's')
        {
            if (head_row < 5){
                head_row++;
                system("clear");
                grid(head_row, head_col);
            }
            else { printf("Za daleko"); }
        }
        else if (input == 'k')
        {
            execute = false;
        }
        else { printf("Nieznana funckja"); grid(head_row, head_col);}
    }
}

int main(void) {
    running();

    return 0;
}

