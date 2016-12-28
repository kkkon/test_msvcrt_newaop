
#include "stdafx.h"

#include "newaop3_test.h"


#include <memory.h>

//#include "test_cls.h"

//#include <vector>

//#include <new>
#include <new.h>

#include <string>

A::A()
{
    mVal2.val1 = 1;
}

A::~A()
{
}

void
A::set( const int val )
{
    mVal1 = val;
}

void
test(void)
{
    {
        A*    p = ::new A[4];
        p->set( 5 );
        ::delete[] p;
    }
}

