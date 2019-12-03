/*
** TROLOL PROJECT, 2018
** TROLOL_punchline_2018
** File description:
** main
*/

#include <ncurses.h>
#include <stdlib.h>

int main(void)
{
    WINDOW *box;
    char *str = "punch ";
    char *new_str = malloc(1);

    initscr();
    while (1) {
        refresh();
        clear();
        free(new_str);
        new_str = calloc(COLS, sizeof(char));
        for (int i = 0; i < COLS; i++)
            new_str[i] = str[i % 6];
        mvprintw(LINES / 2, 0, new_str);
        if (getch() != 410)
            return (0);
    }
    getch();
    endwin();
    free(box);
    return (0);
}
