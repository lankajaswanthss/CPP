// Also known as encapsulation

#include<iostream>
using namespace std;

class rectangle{
    private:
    int length;
    int breadth;
    public:
    void setlen(int l){
        length = l;
    } 
    void setbre(int b) {
        breadth = b;
    }
    int area(){
        return length*breadth;
    }
};

int main(){
    rectangle r;
    r.setlen(10);
    r.setbre(5);
    cout<<r.area();
}