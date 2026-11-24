#include "derived1.h"

Derived1::Derived1()
{
    m_d1 = 0;
    cout << "derived1 constructor" << endl;
}

Derived1::Derived1(int a, int b) : Base(a)
{
    m_d1 = b;
    cout << "derived1 paramaterize constructor" << endl;
}

Derived1::~Derived1()
{
    cout << "derived1 destructor" << endl;
}

void Derived1::print()
{
    cout << "m_base = " << m_base << endl;
    cout << "m_d1 = " << m_d1 << endl;
}
