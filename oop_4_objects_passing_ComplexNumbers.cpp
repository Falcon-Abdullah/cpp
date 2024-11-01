#include <iostream>
using namespace std;

class complex
{
    int real;
    int imaginary;

public:

    void setNumber(int n1, int n2)
    {
        real = n1;
        imaginary = n2;
    }

    void display()
    {
        cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
    }

    void sum_of_number(complex o1, complex o2){
        real = o1.real + o2.real;
        imaginary = o1.imaginary + o2.imaginary;
    }

};

int main()
{
    complex number,number2,number3;
    
    number.setNumber(2, 6);
    number.display();

    number2.setNumber(3,7);
    number2.display();

    number3.sum_of_number(number,number2);
    number3.display();

    return 0;
}