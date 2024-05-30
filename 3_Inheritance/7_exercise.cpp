// monthly and parttime
#include<iostream>
using namespace std;

class employee{
    private:
    int id,salary;
    string name;
    public:
    void setid(int id){
        this->id = id;
    }
    void setname(string s){
        name = s;
    }
    void setsal(int salary){
        this->salary = salary;
    }
    int getid(){
        return id;
    }
    int getsal(){
        return salary;
    }
    string getname(){
        return name;
    }
    void display(){
        cout<<"Employee id: "<<getid()<<" Name: "<<getname()<<" Salary: "<<getsal()<<endl;
    } 
};

class daily:public employee{
    public:
    daily(int i, string s, int sa){
        setid(i);
        setname(s);
        setsal(sa);
    }
};
int main(){
    daily d1(1,"John",500);
    daily d2(2,"Roy",5000);
    d1.display();
    d2.display();
    return 0;
}