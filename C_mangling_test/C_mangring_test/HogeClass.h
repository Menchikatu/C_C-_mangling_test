#ifndef HOGE_CLASS_HEADER_INCLUDED
#define HOGE_CLASS_HEADER_INCLUDED

#if __cplusplus

namespace HogeNameSpace {
	struct HogeNameStruct {
		int a;
		int b;
	};

}

using namespace HogeNameSpace;

class HogeClass
{
public:
	static const int mStructLen = 15;
	struct HogeNameStruct hogeNameStruct[mStructLen];
	struct HogeStruct {
		int a;
		int b;
	} hogeStruct[mStructLen];
	HogeClass();
	~HogeClass();
};

#endif

#endif