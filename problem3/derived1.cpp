#include "derived1.h"

Derived1::Derived1()
{
    m_d1 = 0;
    cout << "Derived1 Constructor" << endl;
}

Derived1::Derived1(int a, int b) : Base(a)
{
    m_d1 = b;
    cout << "Derived1 Parameterized Constructor" << endl;
}

Derived1::Derived1(const Derived1 &other) : Base(other)
{
    m_d1 = other.m_d1;
    cout << "Derived1 Copy Constructor" << endl;
}

Derived1::~Derived1()
{
    cout << "Derived1 Destructor" << endl;
}

Derived1& Derived1::operator=(const Derived1 &other)
{
    cout << "Derived1 Assignment Operator" << endl;
    if (this != &other)
    {
        Base::operator=(other);
        m_d1 = other.m_d1;
    }
    return *this;
}

void Derived1::setValue(int v)
{
    cout << "Derived1 setValue function" << endl;
    Base::setValue(v);
    m_d1 = v;
}

void Derived1::print()
{
    cout << "m_base = " << m_base << endl;
    cout << "m_d1 = " << m_d1 << endl;
}
