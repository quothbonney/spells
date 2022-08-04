#include <iostream>
#include <ncursesw/ncurses.h>


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
