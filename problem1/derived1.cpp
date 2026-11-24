#include "derived1.h"

Derived1::Derived1() : Base()
{
    m_d1 = 0;
    cout << "Derived1 Constructor" << endl;
}

Derived1::~Derived1()
{
    cout << "Derived1 Destructor" << endl;
}
