// 注意！！必ずリビルドする事。じゃないとobjが更新されず未解決のシンボルエラーになる

#ifndef MAIN_FILE_INCLUDED
#define MAIN_FILE_INCLUDED
#include <stdio.h>
#include "cfile.c"

void main() {
	c_callFunc();

	getchar();
}

#endif