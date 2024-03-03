//use <string> library
//use getline()
//getline has a method to call and variable to store
//getline(cin,var);

#include <iostream>
#include <string>
using namespace std;
int main(){
    string name;
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Your name is "<<name;
    return 0;
}