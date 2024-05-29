// Here we dont copy the constructor for the pointer variables

#include<iostream>
using namespace std;

class rectangle{
    private:
    int a;
    int *p;
    public:
    rectangle(){
        a = 1;
        p=new int[a];
    }
    rectangle(int a1){
        a = a1;
        p = new int[a];
    }
    rectangle(rectangle &r){
        a = r.a;
        p = new int [a];
    }
};

int main(){
    rectangle r;

    rectangle r1(1);

    rectangle r2(r1);
}