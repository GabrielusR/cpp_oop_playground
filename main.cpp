#include <iostream>

#include "oop.h"

using namespace std;

int main()
{
    Example *ex = new SubSubExample();

    ex->foobar();

    delete ex;

    return 0;
}
