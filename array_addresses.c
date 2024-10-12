#include<stdio.h>
int main(){
    int arr[] = {4,6,7,8};
    int arr2[] = {24,6,7,8};
   
    printf("Address of first element: %d\n",  arr);
    printf("Address of first element: %d\n",  arr[0]);
    printf("Address of first element: %p\n",  arr[1]);
    printf("Address of first element: %p\n",  arr[2]);
}