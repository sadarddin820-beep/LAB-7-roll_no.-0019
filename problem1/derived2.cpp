#include "derived2.h"

Derived2::Derived2() : Derived1()
{
    m_d2 = 0;
    cout << "Derived2 Constructor" << endl;
}

Derived2::~Derived2()
{
    cout << "Derived2 Destructor" << endl;
}
