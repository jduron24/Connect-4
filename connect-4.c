#include <stdio.h>
#include <ncurses.h>

void game_board()
{
    clear();
    mvprintw(4, 15,
             "|      |       |       |       |       |       |      |\n               "
             "|      |       |       |       |       |       |      |\n               "
             "+------+-------+-------+-------+-------+-------+------|\n               "
             "|      |       |       |       |       |       |      |\n               "
             "|      |       |       |       |       |       |      |\n               "
             "+------+-------+-------+-------+-------+-------+------|\n               "
             "|      |       |       |       |       |       |      |\n               "
             "|      |       |       |       |       |       |      |\n               "
             "+------+-------+-------+-------+-------+-------+------|\n               "
             "|      |       |       |       |       |       |      |\n               "
             "|      |       |       |       |       |       |      |\n               "
             "+------+-------+-------+-------+-------+-------+------|\n               "
             "|      |       |       |       |       |       |      |\n               "
             "|      |       |       |       |       |       |      |\n               "
             "+------+-------+-------+-------+-------+-------+------|\n               "
             "|      |       |       |       |       |       |      |\n               "
             "|      |       |       |       |       |       |      |\n               "
             "+------+-------+-------+-------+-------+-------+------|\n               "
              
              
              );
}





void init_curses()
{
    int ch;
    int to;
    initscr();
    keypad(stdscr, TRUE);
    mvprintw(0, 35, "Connect 4");
    mvprintw(10, 35, "Start game");
    mvprintw(12, 35, "Credits");
    mvprintw(10, 34, ">");

    while (ch != KEY_LEFT)
    {
        ch = getch();
        if (ch == KEY_UP)
        {
            clear();
            mvprintw(0, 35, "Connect 4");
            mvprintw(10, 35, "Start game");
            mvprintw(12, 35, "Credits");

            mvprintw(10, 34, ">");
            to = 1;
            refresh();
        }
        else if (ch == KEY_DOWN)
        {
            clear();
            mvprintw(0, 35, "Connect 4");
            mvprintw(10, 35, "Start game");
            mvprintw(12, 35, "Credits");

            mvprintw(12, 34, ">");
            to = 0;
            refresh();
        }
    }
    if(to == 1){
        game_board();
    }

    endwin();
}

int main(int argc, char *argv[])
{

    init_curses();

    return 0;
}