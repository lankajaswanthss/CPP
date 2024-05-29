#include<iostream>
using namespace std;

class rectangle{
    public:
    int length;
    int breadth;
    int area(){
        return length*breadth;
    }
};

int main(){
    rectangle r;
    r.length = 10;
    r.breadth = 5;
    cout<<"The area is "<<r.area()<<endl;
}