
#include "stdafx.h"

#include <memory.h>

//#include "test_cls.h"

//#include <vector>

//#include <new>
//#include <new.h>

//#define WIN32_LEAN_AND_MEAN
//#include <windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
    //HMODULE hModule = ::LoadLibraryA("kk-win-checker-memory-operation-mismatch-dll.dll");

    {
        int*    p = new int[4];
        ::memset( p, 0, 4 );
        delete[] p;
    }


	return 0;
}

