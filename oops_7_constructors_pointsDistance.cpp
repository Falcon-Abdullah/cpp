#include<iostream>
#include<cmath>
using namespace std;


class point{
private:
    int X,y;
public:
    point(int n1, int n2);
    void printData(){
        cout<<"POint: ("<<X<<" , "<<y<<")"<<endl;
    }
    friend point distance(point,point);  
};


point::point(int n1, int n2){
    X = n1;
    y = n2;
}

point distance(point o1,point o2){
    int x_diff = o1.X - o2.X;
    int y_diff = o1.y - o2.y;
    int square_x = x_diff*x_diff;
    int square_y = y_diff*y_diff;
    int sum = square_x + square_y;
    int ans = sqrt(sum);
    cout<<"the distance is: "<<ans<<endl;
} 


int main(){
    point c1(3,4),c2(5,7);
    c1.printData();
    c2.printData();
    distance(c1,c2);
return 0;
}
