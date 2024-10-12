#include<iostream>
using namespace std;
int main(){
  int a = 12, b = 14;
  while (a>10)
  {
    cout<<"w\n";
    if (a==b)
    {
        b=b+1;
        a= b-(b-a);
    }
  
  }
return 0;  
}