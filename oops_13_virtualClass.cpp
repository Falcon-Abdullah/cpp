#include<iostream>
using namespace std;


class grandpa{
    public:
    int legs = 2;   // For virtual class.
    // This will be passed to both "mom" and "dad" class.
};


class mom : virtual public grandpa {
    public:
    string eyes = "blue";

    void display(){
        cout<<"mam have "<<eyes<<endl;
    }
};


class dad : virtual public grandpa {
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

    void display(){
        mom::display();
    }

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
 cout<<obj.legs<<endl;

 obj.dad::display();
 obj.mom::display();    // Scope operator in case of same attribute,functions
 obj.display();


return 0;
}
