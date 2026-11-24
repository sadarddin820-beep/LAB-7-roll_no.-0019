#ifndef DERIVED1_H
#define DERIVED1_H

#include "base.h"

class Derived1 : public Base
{
protected:
    int m_d1;
public:
    Derived1();
    ~Derived1();
};

#endif
