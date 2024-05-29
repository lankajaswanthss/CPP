// Accessor -> get
// Mutator -> set
#include<iostream>
using namespace std;

class rectangle{
    private:
    int length;
    int breadth;
    public:
    void setlen(int l){
        if(l<=0) l=1;
        length = l;
    }
    void setbre(int b){
        if(b<=0) b=1;
        breadth = b;
    }
    int getlen(){
        return length;
    }
    int getbre(){
        return breadth;
    }
    int area(){
        return length*breadth;
    }
};

int main(){
    rectangle r;
    r.setlen(10);
    r.setbre(2);
    cout<<"The length is "<<r.getlen()<<endl;
    cout<<"The breadth is "<<r.getbre()<<endl;
    cout<<"The area is "<<r.area()<<endl;
}