#include<iostream>
using namespace std;

class rectangle{
    private:
    int length;
    int breadth;
    public:
    rectangle(int l = 0, int b = 0){
        setlen(l);
        setbre(b);
    }
    void setlen(int l){
        if(l<0) l=0;
        length = l;
    }
    void setbre(int b){
        if(b<0) b=0;
        breadth = b;
    }
    int getlen(){
        return length;
    }
    int getbre(){
        return breadth;
    }
    int area();
    int perimeter();
};

int rectangle::area(){
    return length*breadth;
}
int rectangle::perimeter(){
    return 2*(length+breadth);
}

class cuboid:public rectangle{
    private:
    int height;
    public:
    cuboid(int h){
        sethei(h);
    }
    void sethei(int h){
        if(h<0) h = 0;
        height = h;
    }
    int gethei(){
        return height;
    }
    int volume();
};

int cuboid::volume(){
    return getbre()*gethei()*getlen();
}

int main(){
    rectangle r1(10,10);
    cout<<"Area: "<<r1.area()<<endl;
    cout<<"Permeter: "<<r1.perimeter()<<endl;
    cout<<"Using Derived Class"<<endl;
    cuboid c1(10);
    c1.setlen(10);
    c1.setbre(10);
    cout<<"Volume: "<<c1.volume();

}