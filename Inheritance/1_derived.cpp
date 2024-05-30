#include<iostream>
using namespace std;

class base{
    private:
    int x;
    public:
    base(int x=0){
        this->x = x;
    }
    void display(){
        cout<<"Base: "<<x<<endl;
    }
};

class derived : public base{
    private:
    int y;
    public:
    derived(int y=1){
        this->y = y;
    }
    void show(){
        cout<<"Derived: "<<y<<endl;
    }
};

int main(){
    derived d1;
    d1.display();
    d1.show();

    derived d2(10);
    d2.display();
    d2.show();
}