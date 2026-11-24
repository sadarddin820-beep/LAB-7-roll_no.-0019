#include "derived2.h"

Derived2::Derived2()
{
    m_d2 = 0;
    cout << "derived2 constructor << endl;
}

Derived2::Derived2(int a, int b, int c) : Derived1(a, b)
{
    m_d2 = c;
    cout << "derived2 paramaterize constructor" << endl;
}

Derived2::~Derived2()
{
    cout << "Derived2destructor" << endl;
}

void Derived2::print()
{
    cout << "m_base = " << m_base << endl;
    cout << "m_d1 = " << m_d1 << endl;
    cout << "m_d2 = " << m_d2 << endl;
}
