#include <iostream>
using namespace std;

class employee
{
private:
    int a, b;

public:
    int c, d;

    void greet()
    {
        cout << "Hi there how are you" << endl;
    }
};

int main()
{
    employee harry;
    harry.c = 34;
    harry.d = 34;
    cout<<harry.c;
    cout<<harry.d;
    harry.greet();


    return 0;
}