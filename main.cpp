#include <iostream>
#include <ncursesw/ncurses.h>

class GameWindow {
private:
public:
    int sizeX, sizeY;
    int scrSizeX, scrSizeY;
    int offsetX, offsetY;
    GameWindow(int x, int y, int xOff, int yOff, bool cent=false) {
        this->sizeX = x;
        this->sizeY = y;
        this->offsetX = xOff;
        this->offsetY = yOff;

        getmaxyx(stdscr, scrSizeY, scrSizeX);

    }
};

int main() {
    initscr();
    refresh();
    setlocale(LC_ALL, "");
    wchar_t str[] = { L'\u2588', L'\u2588', L'\u2588'};
    addwstr(str);
    addwstr(str);
    addwstr(str);
    addwstr(str);
    refresh();
    getch();
    endwin();
}
