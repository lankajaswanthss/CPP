#include<iostream>
using namespace std;

class rectangle{
    private:
    int length;
    int breadth;
    public:
    // constructor
    rectangle(int l=1, int b=1){ 
        setlen(l);
        setbre(b);
    }
    rectangle(rectangle &r){
        length = r.length;
        breadth = r.breadth;
    }
    // mutator
    void setlen(int l){
        length = l;
    }
    void setbre(int b){
        breadth = b;
    }
    // accessor
    int getlen(){
        return length;
    }
    int getbre(){
        return breadth;
    }
    // facilitator
    int area(){
        return length*breadth;
    }
    // scope resolution use class_name::function
    int perimeter();
};

int rectangle::perimeter(){
    return 2*(length+breadth);
}

int main(){
    rectangle r(5,10);
    cout<<"Area is: "<<r.area()<<endl;
    cout<<"Perimeter is: "<<r.perimeter()<<endl;
}