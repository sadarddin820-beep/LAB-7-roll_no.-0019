
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
    Base(const Base &other);
    ~Base();
    Base& operator=(const Base &other);
    void setValue(int v);
    void print();
};

#endif
