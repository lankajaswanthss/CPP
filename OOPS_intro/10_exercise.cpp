// roll no
// name
// marks in 3 sub

// function for 
// total marks
// grade

#include<iostream>
using namespace std;

class grade{
    private:
    int m1,m2,m3;
    public:
    grade(int m1=0,int m2=0, int m3=0){
        setmarks(m1,m2,m3);
    }
    void setmarks(int m1,int m2,int m3){
        this->m1 = m1;
        this->m2 = m2;
        this->m3 = m3;
    }
    int total();
    int avg();
    
};
int grade::total(){
        return m1+m2+m3;
}
int grade::avg(){
        return (m1+m2+m3)/3;
}
int main(){
    int roll_no,m1,m2,m3;
    cout<<"Enter Roll No: ";
    cin>>roll_no;
    cout<<"Enter Name: ";
    string s;
    cin.ignore();
    getline(cin,s);
    cout<<"Enter your marks: ";
    cin>>m1>>m2>>m3;
    grade g1(m1,m2,m3);
    cout<<"Total Marks: "<<g1.total()<<endl;
    int avg = g1.avg();
    if(avg<60) cout<<"Grade: C";
    else if(avg<80) cout<<"Grade: B";
    else cout<<"Grade: A";
}