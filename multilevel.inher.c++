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

// Derived class from A
class B : public A
{
public:
    void displayB()
    {
        cout << "This is Class B" << endl;
    }
};

// Derived class from B
class C : public B
{
public:
    void displayC()
    {
        cout << "This is Class C" << endl;
    }
};

int main()
{
    C obj;

    obj.displayA();   // Inherited from A
    obj.displayB();   // Inherited from B
    obj.displayC();   // Own function

    return 0;
}