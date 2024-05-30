// p/q multiplication
#include<iostream>
using namespace std;

class divi{
    private:
    int p,q;
    public:
    divi(int p=1, int q=1){
        this->p=p;
        this->q=q;
    }
    divi operator+(divi &d1){
        divi temp;
        temp.p = p*d1.q+d1.p*q;
        temp.q = q*d1.q;
        return temp;
    }
    void display(){
        cout<<p<<"/"<<q;
    }
};
int main(){
    divi d1(5,4);
    divi d2(1,2);
    divi d3;
    d3 = d1 + d2;
    d3.display();
}