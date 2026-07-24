#include <iostream>
using namespace std;

// First Base Class
class A
{
public:
    void displayA()
    {
        cout << "This is Class A" << endl;
    }
};

// Second Base Class
class B
{
public:
    void displayB()
    {
        cout << "This is Class B" << endl;
    }
};

// Derived Class
class C : public A, public B
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

    obj.displayA();
    obj.displayB();
    obj.displayC();

    return 0;
}