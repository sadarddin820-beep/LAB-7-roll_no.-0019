#include "derived2.h"

int main()
{
    Derived2 d2(10, 20, 30);
    Derived2 d3{d2};
    d2.print();
    cout << endl;
    d3.print();

    d3.setValue(-12);
    d2 = d3;

    cout << endl;
    d2.print();

    return 0;
}
