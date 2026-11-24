#ifndef DERIVED2_H
#define DERIVED2_H

#include "derived1.h"

class Derived2 : public Derived1
{
protected:
    int m_d2;
public:
    Derived2();
    Derived2(int a, int b, int c);
    Derived2(const Derived2 &other);
    ~Derived2();
    Derived2& operator=(const Derived2 &other);
    void setValue(int v);
    void print();
};

#endif
