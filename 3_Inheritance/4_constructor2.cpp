//if we have to use the parameterized constructor of both base and derived from derived

#include<iostream>
using namespace std;

class base{
    private:
    int x;
    public:
    base(){
        cout<<"Default Constructor of base"<<endl;
    }
    base(int i){
        cout<<"Parameterized Constructor of base "<<i<<endl;
    }
};

class derived: public base{
    private:
    int y;
    public:
    derived(){
        cout<<"Default constructor of derived"<<endl;
    }
    derived(int i, int j): base(i){
        cout<<"Parameterized constructor of derived "<<j<<endl;
    }
};

int main(){
    derived d(1,10);
    return 0;
}