#include <iostream>

#include "oop.h"

using namespace std;

Example::Example(int oof, int rab)
{
    this->oof = oof;
    this->rab = rab;
}

SubExample::SubExample(int foo, int bar)
{
    this->foo = foo;
    this->bar = bar;
}

void Example::foobar()
{
    cout << "Example::foobar" << endl;
}

void SubExample::foobar()
{
    cout << "Subexample::foobar" << endl;
}

void SubSubExample::foobar()
{
    cout << "SubSubExample::foobar" << endl;
}
