#include<iostream>
using namespace std;

// making template
template <class t>

class vector{
    public:
    int size;
    t * arr;

    vector(t n){
        size = n;
        arr = new t [size];
    }
    void dotProduct( vector &v2){
        t d = 0;
        for (int i = 0; i < size; i++)
        {
            d = d + (this->arr[i] * v2.arr[i]);
        }        
        cout<<"the dot product is: "<<d<<endl;
    }
};

int main(){
    vector <int> v1(3),v2(3);
    v1.arr[0] = 2;
    v1.arr[1] = 2;
    v1.arr[2] = 2;
    v2.arr[0] = 3;
    v2.arr[1] = 3;
    v2.arr[2] = 3;
    v1.dotProduct(v2);

return 0;
}