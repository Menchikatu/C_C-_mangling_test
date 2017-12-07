#ifndef FUNCTION_HEADER_INCLUDED
#define FUNCTION_HEADER_INCLUDED

#if __cplusplus

#include "HogeClass.h"
namespace HogeNameSpace{
	struct HogeNameStruct;
}
void function2(HogeNameSpace::HogeNameStruct* pStructArray, int arrayLen);
void function(HogeClass::HogeStruct* pStructArray,int arrayLen);

#endif

#endif