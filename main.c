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
    WINDOW *boite;
    char *str = "punch ";
    char *new_str;
    int i;

    initscr();
    while (1) {
        refresh();
        clear();
        free(new_str);
        new_str = malloc(sizeof(char) * COLS);
        for (i= 0; i < COLS; i++)
            new_str[i] = str[i % 6];
        new_str[i] = 0;
        mvprintw(LINES / 2, 0, new_str);
        if (getch() != 410)
            return (0);
    }
    getch();
    endwin();
    free(boite);
    return (0);
}