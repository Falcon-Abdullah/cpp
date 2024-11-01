#include<iostream>
using namespace std;


class animal{
    bool movement;

    public:
    int legs;
    animal(){}
    
    animal(int l, bool m){
        legs = l;
        movement = m;
    }

    void speak(){
        cout<<"i am animal and i can speak"<<endl;
    }

    void display(){
        cout<<"The animal has "<<legs<<" legs"<<endl;
    }
};


class dog: animal{

    public:
    dog(){}
    dog(int l){
        legs = l;
    }

    void bark(){
        speak();
        cout<<"bhow bhow"<<endl;
    }
};


int main(){
    animal o1(4,true);
    o1.speak();
    o1.display();

    dog o2(2);
    o2.bark();  

return 0;
}