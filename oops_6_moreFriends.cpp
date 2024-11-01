#include <iostream>
using namespace std;

class Y;


class X
{
    int value;

public:
    void setValue(int n1)
    {
        value = n1;
    }
    void getValue()
    {
        cout << "The value is: " << value << endl;
    }
    friend void sum(X o1, Y o2);
};


class Y
{
    int value;

public:
    void setValue(int n1)
    {
        value = n1;
    }
    void getValue()
    {
        cout << "The value is: " << value << endl;
    }
    friend void sum(X , Y );
};


void sum(X o1, Y o2)
{
    cout << "The Sum is: " << o1.value + o2.value << endl;
}


int main()
{
    X number1;
    Y number2;

    number1.setValue(2);
    number2.setValue(5);

    number1.getValue();
    number2.getValue();

    sum(number1,number2);

    return 0;
}