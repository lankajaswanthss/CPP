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
    rectangle r,*r1;
    r1=&r;

    r.length = 10;
    r.breadth = 6;
    cout<<"The area is "<<r.area()<<endl;
    
    r1->length = 10;
    r1->breadth = 5; // use arrow operator
    cout<<"The area is "<<r1->area()<<endl;
}