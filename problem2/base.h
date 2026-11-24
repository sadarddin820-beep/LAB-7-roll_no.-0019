#ifndef BASE_H
#define BASE_H

#include <iostream>
using namespace std;

class Base
{
protected:
    int m_base;
public:
    Base();
    Base(int b);
    ~Base();
    void print();
};

#endif
