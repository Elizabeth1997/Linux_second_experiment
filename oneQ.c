//#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//#include <string.h>
#include <curses.h>

int main(int argc, char const *argv[])
{
	/* code */
	//初始化
	initscr();
	move(5,15);
	printw("%s"," Hello, World! " );
	//刷新物理屏幕，在要求的位置显示字符串
	refresh();
	//显示停留5秒
	sleep(5);
	//销毁
	endwin();
	//退出显示界面
	exit(EXIT_SUCCESS);

	return 0;
}