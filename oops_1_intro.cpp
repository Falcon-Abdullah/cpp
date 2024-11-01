// Private variables can only be changed by using functions,

#include <iostream>
using namespace std;

class employee
{
private:
    int a, b, c; 
public: 
    int d, e;

    void setData(int a1, int b1, int c1, int d1);

    void Display()
    {
        cout << "the value of a is: " << a << endl;
        cout << "the value of b is: " << b << endl;
        cout << "the value of c is: " << c << endl;
        cout << "the value of d is: " << d << endl;
        cout << "the value of e is: " << e << endl;
    }
}S1,S2; 

void employee ::setData(int a1, int b1, int c1, int d1)
{
    a = a1;
    b = b1;
    c = c1;
    d = d1;
}

int main()
{   
    employee harry;
    harry.e = 34;
    
    cout<<harry.d<<endl;

    harry.setData(3,5,7,3);
    harry.d = 50;
    
    harry.Display();
    S1.Display();

    return 0;
}

