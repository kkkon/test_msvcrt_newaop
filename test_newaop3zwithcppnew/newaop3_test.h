#pragma once

class A
{
public:
    A();
    virtual ~A();

public:
    void
    set( const int val );

protected:
    struct tag
    {
        char val1;
        int  val2;
    };

    char   mVal1;
    tag    mVal2;
};

