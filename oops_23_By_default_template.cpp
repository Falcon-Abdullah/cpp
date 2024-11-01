#include<iostream>
using namespace std;

template<class t1 = int, class t2 = int, class t3 = int> 

class structure {
    public:
    t1 data1;
    t2 data2;
    t3 data3;

    structure(t1 a, t2 b, t3 c){
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void display(){
        cout<<"The values are: "<<data1<<" "<<data2<<" "<<data3<<endl;
    }
};

int main(){
    structure <> obj(3,4,5);
    obj.display();

return 0;
}