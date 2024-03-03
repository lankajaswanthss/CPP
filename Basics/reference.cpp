#include <bits/stdc++.h>
using namespace std;
int main(){
    int value = 10;
    int *pointer = &value;
    int &reference = value;
    cout<<value<<endl;
    *pointer = *pointer*10;
    cout<<*pointer<<endl;
    
    cout<<reference<<endl;
}