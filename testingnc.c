#include <stdio.h>
#include <ncurses.h>
#include <time.h>
#include <stdlib.h>

int str_len (char *str)
{
    char *p;
    int len;

    while (*p != '\0')
    {
        ++p;
        printf ("%c", *p);
        ++len;
    }

    return len;
}



int main()
{
    initscr();

    //cbreak();
    //raw();
    //noecho();


    WINDOW *wind = newwin (0, 0, 0, 0);

    refresh();

    int blinga = getmaxx (wind);
    int blonga = getmaxy (wind);

    char *title = "MASTERMIND";

    box (wind, 0, 0);

    move (blonga/2, (blinga/2)-str_len(title));

    printw ("%s", title);


    //mvwprintw (wind, x, y-50, "what the fuck");



    wrefresh (wind);

    //int c = getch();

    getch();
    endwin();

}