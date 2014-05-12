#include <iostream>
#include <curses.h>
using namespace std;
void map(){
int h=40;
for(int i=1;i<=h;i++){
	for(int x=0;x<0;x++){
		mvprintw(0,i," ");
	}
	for(int j=1;j<=h;j++){
		if(j==1||j==h||i==h||i==1)
		mvprintw(i,40,"#");
	}
}
}
int main()
{
    int x = 36;
    int y = 22;
    int ch; 
    initscr();
    curs_set(0);
    keypad(stdscr, TRUE);     
    noecho(); 
    while (1)
    {
        mvprintw(y, x, "<|A|>");
        ch = getch();
        if (ch == KEY_DOWN)
        {            y++;
            clear();
        }
        if (ch == KEY_UP)
        {
            y--;
            clear();
        }
        if (ch == KEY_LEFT)
        {
            x--;
            clear();
        }
        if (ch == KEY_RIGHT)
        {
            x++;
            clear();
        }
        refresh();
    }
    endwin();         
    return 0;
}  