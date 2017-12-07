#include "Function.h"

#if __cplusplus

namespace HogeNameSpace {
	struct HogeNameStruct;
}

void function2(HogeNameSpace::HogeNameStruct* pStructArray, int arrayLen) {
	for (int n = 0; n < arrayLen; n++) {
		pStructArray[n].a = n*n;
		pStructArray[n].b = n * 2;
	}
}

void function(HogeClass::HogeStruct* pStructArray,int arrayLen) {
	for (int n = 0; n < arrayLen; n++) {
		pStructArray[n].a = n*n;
		pStructArray[n].b = n * 2;
	}
}

#endif