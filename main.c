#include <stdio.h>
#include <stdbool.h>

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
            head_col--; // Dodać if, by nie szedł poza 0
            grid(head_row, head_col);
        }
        else if (input == 'd')
        {
            head_col++; // Dodać if, by nie szedł poza 6
            grid(head_row, head_col);
        }
        else if (input == 'w')
        {
            head_row--; // Dodać if, by nie szedł poza 6
            grid(head_row, head_col);
        }
        else if (input == 's')
        {
            head_row++; // Dodać if, by nie szedł poza 6
            grid(head_row, head_col);
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

