#include <iostream>
using namespace std;

class base1
{
    int data1;

public:
    base1(int n1)
    {
        data1 = n1;
        cout << "BASE_1 constructor is called." << endl;
    }

    void display()
    {
        cout << "Your data is: " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int n1)
    {
        data2 = n1;
        cout << "BASE_2 constructor is called." << endl;
    }

    void display()
    {
        cout << "Your data is: " << data2 << endl;
    }
};

class derieved : public base1, public base2{
    int data3, data4;

public:
    derieved(int a, int b, int c, int d) : base1(c), base2(d)  // --> point to be noted
    {
        data3 = a;
        data4 = b;
        cout << "Derieved constructor is called" << endl;
    }
    void displayDerieved()
    {
        cout << "Your data is: " << data3 << endl;
        cout << "Your data is: " << data4 << endl;
    }
};

int main()
{
    derieved obj(2,3,4,5);
    obj.base1::display();
    obj.displayDerieved();

    return 0;
}