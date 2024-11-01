#include<iostream>
using namespace std;

class mom {
    public:
    string eyes = "blue";

    void display(){
        cout<<"mam have "<<eyes<<endl;
    }
};


class dad{
    string eyes = "Black";
    public:
    int height = 6;

    void display(){
        cout<<"The heght is: "<<height<<endl;
        cout<<"The eyes is: "<<eyes<<endl;
    }

    void setEyes(string n){
        eyes = n;
    }
};


class child: public dad , public mom{
    protected:
    string game = "GTA";
    public:
      void info(){
        cout<<"i have inherited: "<<mom::eyes<<endl; // Scope operator in case of same attribute,funtions
        cout<<"i have inherited: "<<height<<endl;
      }

};


int main(){

 child obj;
 obj.setEyes("orange");
 obj.info();
 cout<<obj.height<<endl;
 obj.mom::display(); // Scope operator in case of same attribute,functions

return 0;
}