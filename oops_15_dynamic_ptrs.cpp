#include<iostream>
using namespace std;
int main(){

    // Dynamic pointers
    int *p = new int [3];

    p[0] = 1;
    p[1] = 2;
    p[2] = 3;

    delete[] p; // last deleted value will remain.

    p=nullptr;  // So for this i will use this expression.
    
    cout<<*p<<endl;
    cout<<p[0]<<endl;
    cout<<p[1]<<endl;
    cout<<p[2]<<endl;

return 0;
}