#include "derived2.h"

Derived2::Derived2()
{
    m_d2 = 0;
    cout << "Derived2 Constructor" << endl;
}

Derived2::Derived2(int a, int b, int c) : Derived1(a, b)
{
    m_d2 = c;
    cout << "Derived2 Parameterized Constructor" << endl;
}

Derived2::Derived2(const Derived2 &other) : Derived1(other)
{
    m_d2 = other.m_d2;
    cout << "Derived2 Copy Constructor" << endl;
}

Derived2::~Derived2()
{
    cout << "Derived2 Destructor" << endl;
}

Derived2& Derived2::operator=(const Derived2 &other)
{
    cout << "Derived2 Assignment Operator" << endl;
    if (this != &other)
    {
        Derived1::operator=(other);
        m_d2 = other.m_d2;
    }
    return *this;
}

void Derived2::setValue(int v)
{
    cout << "Derived2 setValue function" << endl;
    Derived1::setValue(v);
    m_d2 = v;
}

void Derived2::print()
{
    cout << "m_base = " << m_base << endl;
    cout << "m_d1 = " << m_d1 << endl;
    cout << "m_d2 = " << m_d2 << endl;
}
