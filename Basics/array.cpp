//array is continous allocation of memory
// int array[size];
//nnew version: int arr[5]={1,2,3,4,5};


#include <iostream>
using namespace std;
int main(){
    int arr[5]={1};
    cout<<arr; // address of first element
    cout<<arr[3]; // if initialized 0 will be assigned
    int *arrpointer=arr; //array pointer acts like array
    cout<<arrpointer[0];
    arrpointer+=1;
    *arrpointer = 50;
    cout<<arr[1]; // incrementing array pointer moves to the next element address
    return 0;
}