#ifndef _OOP_H_
#define _OOP_H_

using namespace std;

class Example {
private:
    int oof;
    int rab;

public:

    virtual void foobar();

    Example(int oof, int rab);

    Example(){}

    virtual ~Example(){cout << "Destrutor de Example" << endl;}
};

class SubExample : public Example
{
private:
    int foo;
    int bar;

public:
    virtual void foobar();

    SubExample(int foo, int bar);

    SubExample(){}

    virtual ~SubExample(){cout << "Destrutor de SubExample" << endl;}
};

class SubSubExample : public SubExample
{
public:
    virtual void foobar();

    virtual ~SubSubExample(){cout << "Destrutor de SubSubExample" << endl;}
};

#endif
