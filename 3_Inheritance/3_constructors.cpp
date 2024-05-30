// Constructors in Inheritance
// First base class and then derived class (priority)
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
    derived(int j ){
        cout<<"Parameterized constructor of derived "<<j<<endl;
    }
};
int main(){
    derived d,d1(10);
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    return 0;
}