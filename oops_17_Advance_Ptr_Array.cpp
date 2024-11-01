#include <iostream>
using namespace std;

class employee
{

private:
    int a, b;

public:
    int c, d;
    void setData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void display()
    {
        cout << "Value of a is: " << a << endl;
        cout << "Value of b is: " << b << endl;
    }
};

int main()
{

    // Making arry of objects
    employee *ptr = new employee[3];
    employee *temp = ptr; // temp pointer again poits 1st element(object) of array

    for (int i = 0; i < 3; i++)
    {
        (*ptr).setData(0 + i, 3);
        ptr++;
    }

    for (int i = 0; i < 3; i++)
    {
        (*temp).display();
        temp++;
    }

    return 0;

// Another Way of doing this without using "temp" ;

    // for (int i = 0; i < 3; i++)
    // {
    //     ptr[i].setData(0 + i, 3);
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     ptr->display();
    //     ptr++;
    // }

}