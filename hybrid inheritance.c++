#include <iostream>
using namespace std;

// Base class
class A
{
public:
    void displayA()
    {
        cout << "This is Class A" << endl;
    }
};

// Hierarchical inheritance
class B : virtual public A
{
public:
    void displayB()
    {
        cout << "This is Class B" << endl;
    }
};

class C : virtual public A
{
public:
    void displayC()
    {
        cout << "This is Class C" << endl;
    }
};

// Multiple inheritance
class D : public B, public C
{
public:
    void displayD()
    {
        cout << "This is Class D" << endl;
    }
};

int main()
{
    D obj;

    obj.displayA();
    obj.displayB();
    obj.displayC();
    obj.displayD();

    return 0;
}