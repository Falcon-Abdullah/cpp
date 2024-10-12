#include<iostream>
using namespace std;
int main(){
  int arr[] = {2,3,4,65,7,3};

  for (int i = 0; i < 6; i++)
  {
    int num = arr[i];
    for (int j = i; j < 6; j++)
    {
      if (num>arr[j])
      {
        int temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
      }
    }
  }

  
  for (int i = 0; i < 6; i++)
  {
    cout<<arr[i]<<" ";
  }
return 0;
}