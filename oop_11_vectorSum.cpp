#include<iostream>
using namespace std;
class vector{
    int i;
    int j;
    int k;
    public:
    vector(){}
    vector(int a,int b,int c){
        i = a;
        j = b;
        k = c;
    }
    vector sum1(vector o1,vector o2){
        
        i = o1.i + o2.i;
        j = o1.j + o2.j;
        k = o1.k + o2.k;
        
    }
    vector sum(vector o1,vector o2){
        vector o3;
        o3.i = o1.i + o2.i;
        o3.j = o1.j + o2.j;
        o3.k = o1.k + o2.k;
        return o3;
    }

    void display(){
        cout<<"Vector: "<<i<<"i + "<<j<<"j + "<<k<<"k"<<endl;
    }
};

int main(){
    vector o1(2,6,7),o2(2,4,6),o3,o4,o5;
    // o3 = o4.sum(o1,o2);
    // o3.display();
    o5.sum1(o1,o2);
    o5.display();

return 0;
}