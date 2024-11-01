#include <iostream>
using namespace std;

template <class t , class t2>

class structure{
public:
    t data1;
    t2 data2;
    structure(t n1,t2 n2)
    {
        data1 = n1;
        data2 = n2;
    }

    void display()
    {
        cout << data1 <<"\t"<<data2<<endl;
    }
};

int main(){
    structure <int,int> obj(34,56);
    obj.display();

    structure <float,char> obj2(34,'c');
    obj2.display();

    structure <string,char> obj3("STRING",'c');
    obj3.display();

    return 0;
}