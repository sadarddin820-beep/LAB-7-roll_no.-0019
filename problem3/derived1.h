#ifndef DERIVED1_H
#define DERIVED1_H

#include "base.h"

class Derived1 : public Base
{
protected:
    int m_d1;
public:
    Derived1();
    Derived1(int a, int b);
    Derived1(const Derived1 &other);
    ~Derived1();
    Derived1& operator=(const Derived1 &other);
    void setValue(int v);
    void print();
};

#endif
