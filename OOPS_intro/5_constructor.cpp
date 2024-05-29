// 4 types:
// 1. default constructor
// 2. non parameterized constructor
// 3. parameterized constructor
// 4. copy constructor

#include<iostream>
using namespace std;

class rectangle{
    private:
    int length;
    int breadth;
    public:
    rectangle(){
        length = 1;
        breadth = 1;// non parameterized
    }
    rectangle(int l,int b){
        setlen(l);
        setbre(b);
    }
    rectangle(rectangle &r){
        length = r.length;
        breadth = r.breadth;
    }
    void setlen(int l){
        length = l;
    } 
    void setbre(int b){
        breadth = b;
    } 
    int area(){
        return length*breadth;
    }
};

int main(){
    rectangle r;
    cout << "Area of default rectangle: " << r.area() << endl;

    rectangle r1(1, 2);
    cout << "Area of parameterized rectangle: " << r1.area() << endl;

    rectangle r2(r1);
    cout << "Area of copied rectangle: " << r2.area() << endl;
}