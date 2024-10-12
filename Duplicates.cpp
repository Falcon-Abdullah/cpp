#include <iostream>
using namespace std;
int main()
{
  int arr[] = {5, 9, 43, 8, 4, 7, 7, 5};
  for (int i = 0; i < 8; i++)
  {
    for (int j = i + 1; j < 8; j++)
    {
      if (arr[i] == arr[j])
      {
        arr[j] = 0;
      }
    }
  }
  // Printing Array;
  for (int i = 0; i < 8; i++)
  {
    if (arr[i] != 0)
    {
      cout << arr[i] << " ";
      /* code */
    }
  }
  return 0;
}