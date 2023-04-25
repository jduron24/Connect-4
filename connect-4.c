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

void game_loop()
{
    int column;
    int ch;
    game_board();
    mvprintw(3, 19, "v");
    column = 0;
    while (ch != KEY_DOWN)
    {
        ch = getch();
        if (ch == KEY_RIGHT && column == 0)
        {
            clear();
            game_board();
            mvprintw(3, 26, "v");
            column = 1;
        }
        else if (ch == KEY_RIGHT && column == 1)
        {
            clear();
            game_board();
            mvprintw(3, 34, "v");
            column = 2;
        }
        else if (ch == KEY_RIGHT && column == 2)
        {
            clear();
            game_board();
            mvprintw(3, 42, "v");
            column = 3;
        }
        else if (ch == KEY_RIGHT && column == 3)
        {
            clear();
            game_board();
            mvprintw(3, 50, "v");
            column = 4;
        }
        else if (ch == KEY_RIGHT && column == 4)
        {
            clear();
            game_board();
            mvprintw(3, 58, "v");
            column = 5;
        }
        else if (ch == KEY_RIGHT && column == 5)
        {
            clear();
            game_board();
            mvprintw(3, 66, "v");
            column = 6;
        }
        else if (ch == KEY_LEFT && column == 6)
        {
            clear();
            game_board();
            mvprintw(3, 58, "v");
            column = 5;
        }
        else if (ch == KEY_LEFT && column == 5)
        {
            clear();
            game_board();
            mvprintw(3, 50, "v");
            column = 4;
        }
        else if (ch == KEY_LEFT && column == 4)
        {
            clear();
            game_board();
            mvprintw(3, 42, "v");
            column = 3;
        }
        else if (ch == KEY_LEFT && column == 3)
        {
            clear();
            game_board();
            mvprintw(3, 34, "v");
            column = 2;
        }
        else if (ch == KEY_LEFT && column == 2)
        {
            clear();
            game_board();
            mvprintw(3, 26, "v");
            column = 1;
        }
        else if (ch == KEY_LEFT && column == 1)
        {
            clear();
            game_board();
            mvprintw(3, 18, "v");
            column = 0;
        }
    }
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
    if (to == 1)
    {
        game_loop();
    }

    endwin();
}

int main(int argc, char *argv[])
{

    init_curses();

    return 0;
}