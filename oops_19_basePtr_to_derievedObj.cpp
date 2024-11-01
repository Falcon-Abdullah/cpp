#include <iostream>
using namespace std;
class base
{
public:
    int b = 1;
    void display()
    {
        cout << "The value of the base variable is: "<< b << endl;
    }
};

class derieved : public base {
    public:
    int d = 2;
    void display()
    {
        cout << "The value of the derieved variable is: "<< d << endl;
        cout << "The value of the base variable is: "<< b << endl;
    }
};

int main(){

    base obj_base;
    derieved obj_derived;
    
    base *ptr_base;
    derieved *ptr_derieved;

    ptr_base = & obj_derived;
    // ptr_base = & obj_base;  --> Also works cuz its from base to base

    ptr_derieved = & obj_derived;
    // ptr_derieved = & obj_base; --> This is not possible

    ptr_base->display();
    ptr_derieved->display();

    return 0;

}