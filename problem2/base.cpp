#include "base.h"

Base::Base()
{
    m_base = 0;
    cout << "Base constructor << endl;
}

Base::Base(int b)
{
    m_base = b;
    cout << "Base paramaterize constructor" << endl;
}

Base::~Base()
{
    cout << "Base destructor" << endl;
}

void Base::print()
{
    cout << "m_base = " << m_base << endl;
}
