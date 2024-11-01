#include <iostream>
using namespace std;

class calculator
{
public:
    int num1;
    int num2;

    void setNumber(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }

    void add()
    {
        cout << "The result after adding is: " << num1 + num2 << endl;
    }
    void sub()
    {
        cout << "The result after subtracting is: " << num1 - num2 << endl;
    }
    void mul()
    {
        cout << "The result after multiplication is: " << num1 * num2 << endl;
    }
    void div()
    {
        cout << "The result after division is: " << num1 / num2 << endl;
    }
};


class scientific_Cal : public calculator
{
public:
    void square()
    {
        cout << "The result after square is: " << num1*num1 << endl;
    }

    void cube()
    {
        cout << "The result after cube is: " << num1*num1*num1 << endl;
    }
};


class hybrid : public scientific_Cal
{
public:

    void factorial ()
    {
        int factorial = 1;
        for (int i = 1; i <= num1; i++)
        {
            factorial = factorial*i;
        }
        cout << "The result after factorial is: " << factorial << endl;
    }
};    



int main()
{
    calculator obj; // all objects have separate different attributes 
    obj.setNumber(2,3);
    obj.add();

    scientific_Cal obj2;
    obj2.setNumber(3,4);
    obj2.square();
    obj2.add();

    hybrid obj3;
    obj3.setNumber(5,6);
    obj3.factorial();

    return 0;
}
