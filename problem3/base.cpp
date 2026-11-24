#include "base.h"

Base::Base()
{
    m_base = 0;
    cout << "Base Constructor" << endl;
}

Base::Base(int b)
{
    m_base = b;
    cout << "Base Parameterized Constructor" << endl;
}

Base::Base(const Base &other)
{
    m_base = other.m_base;
    cout << "Base Copy Constructor" << endl;
}

Base::~Base()
{
    cout << "Base Destructor" << endl;
}

Base& Base::operator=(const Base &other)
{
    cout << "Base Assignment Operator" << endl;
    if (this != &other)
    {
        m_base = other.m_base;
    }
    return *this;
}

void Base::setValue(int v)
{
    cout << "Base setValue function" << endl;
    m_base = v;
}

void Base::print()
{
    cout << "m_base = " << m_base << endl;
}
