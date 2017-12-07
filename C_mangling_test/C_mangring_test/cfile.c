#ifndef C_FILE_INCLUDED
#define C_FILE_INCLUDED
#include <stdio.h>
#include "HogeClass.h"
#include "Function.h"

// C++でコンパイルしてほしい関数
#if __cplusplus
extern "C"
{
#endif
	void cpp_func();
	void cpp_func3disp();
	void cpp_func3();
	void cpp_func4();
	void cpp_func4disp();

#if __cplusplus
}
#endif

#if __cplusplus
HogeClass::HogeStruct hogeStructArray[HogeClass::mStructLen];
HogeNameSpace::HogeNameStruct hogeNameStructArray[HogeClass::mStructLen];

void cpp_func() {
	printf("called cpp func\n"); 
	for (int n = 0; n < 15; n++) {
		hogeStructArray[n].a = 10;
		hogeStructArray[n].b = 20;
	}
}

void cpp_func3disp() {
	printf("called cpp func3disp\n");
	for (int n = 0; n < 15; n++) {
		printf("struct[%d] : ( %d , %d )\n",n, hogeStructArray[n].a, hogeStructArray[n].b);
	}
}

void cpp_func3() {
	printf("called cpp func3\n");

	function(hogeStructArray,HogeClass::mStructLen);
}

void cpp_func4() {
	printf("called cpp func4\n");
	function2(hogeNameStructArray, HogeClass::mStructLen);
}

void cpp_func4disp() {
	printf("called cpp func4disp\n");
	for (int n = 0; n < 15; n++) {
		printf("struct[%d] : ( %d , %d )\n", n, hogeNameStructArray[n].a, hogeNameStructArray[n].b);
	}
}

#endif

// C++呼び出し用関数

void c_callFunc() {
	cpp_func();
	cpp_func3();
	cpp_func3disp();
	cpp_func4();
	cpp_func4disp();
}

#endif