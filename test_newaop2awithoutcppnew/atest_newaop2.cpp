
#include "stdafx.h"

#include <memory.h>

#include "newaop2_test.h"

//#include <vector>

//#include <string>


void
test(void);


//#include <new>
#include <new.h>

//#define WIN32_LEAN_AND_MEAN
//#include <windows.h>

int _tmain(int argc, _TCHAR* argv[])
{
    //HMODULE hModule = ::LoadLibraryA("kk-win-checker-memory-operation-mismatch-dll.dll");

    test();

#if 0
    {
        A*    p = new A;
        p->set( 5 );
        delete p;
    }
#endif

	return 0;
}

