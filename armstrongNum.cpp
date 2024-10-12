#include <iostream>
#include <string>
using namespace std;
int main()
{
  int num; // 12521
  cout << "enter number: " << endl;
  cin >> num;
  int orignal, reversed = 0, remainder;
  orignal = num;
  int sum = 0;
  while (num != 0)
  {
    remainder = num % 10;
    sum = sum + remainder*remainder*remainder;
    num = num/10;
  }
  if (sum == orignal)
  {
    cout<<"Armstring";
  }
}