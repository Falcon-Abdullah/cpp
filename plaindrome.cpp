#include<iostream>
using namespace std;
int main(){
    char arr[] = {'a','b','b','b'};
    for (int i = 0; i < 4; i++)
    {
        if (arr[i]!=arr[4-1-i])
        {
            cout<<"not a plaindrom";
            return 0;
        }
    }
    cout<<"plaindrome";
return 0;
}