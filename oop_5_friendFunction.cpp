#include<iostream>
using namespace std;

class complex{
    int real;
    int imaginary;

    public:
    
    void setData(int n1, int n2){
        real = n1;
        imaginary = n2;
    }
    
    void display(){
        cout<<"Complex Number: "<<real<<" + "<<imaginary<<"i"<<endl;
    }
    friend complex sum(complex o1, complex o2);  
     
};

complex sum(complex o1, complex o2){
   complex o3;
   o3.real = o1.real + o2.real;
   o3.imaginary = o1.imaginary + o2.imaginary;
   return o3;
}   



int main(){

    complex number1,number2,number3;
    number1.setData(3,5);
    number1.display();
    
    number2.setData(4,6);
    number2.display();

    number3 = sum(number1, number2);
    number3.display();

    
return 0;
}