#include <iostream>
using namespace std;
class employee{

private:
    int a, b;
    
public:
    int c, d;
    void greet(){
        cout << "Hi there how are you" << endl;
    }
};

int main()
{

    employee harry,sara,bashir;

    // Pointing to object statically
    employee *p = &harry;
    (*p).greet();

    // Pointing object dynamically
    employee *ptr = new employee;
    (*ptr).greet();
    ptr->greet();

    harry.c = 34;
    harry.d = 34;    

    return 0;
   
}