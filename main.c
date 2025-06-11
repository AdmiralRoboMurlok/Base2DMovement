#include <stdio.h>
#include <stdbool.h>

void grid(int head_row, int head_col) {
    char grid_map[6][6];

    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (i == head_row && j == head_col)
            {
                grid_map[i][j] = 'X';
            } else grid_map[i][j] = 'O';
        }
    }

    printf(grid_map); // Musimy printować inaczej, bo tak printuje się w lini
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
            head_row++; // Dodać if, by nie szedł poza 6
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
    }
}

int main(void) {
    running();

    return 0;
}

