#include <iostream>
using namespace std;
int main() {
    int arr[] = {3, 5, 7, 81, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    if (size < 2) {
        cout << "Array is too small to find the second largest element." << endl;
        return 1;
    }
    // Find the largest element and its index
    int max = arr[0];
    int index = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            index = i;
        }
    }
    // Exclude the largest element by setting it to a very small value
    arr[index] = 0;
    // Find the second largest element
    int S_max = arr[0];
    int S_index = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > S_max) {
            S_max = arr[i];
            S_index = i;
        }
    }
    
    cout << "Largest element: " << max << endl;
    cout << "Index of largest element: " << index << endl;
    cout << "Second largest element: " << S_max << endl;
    
    return 0;
}
