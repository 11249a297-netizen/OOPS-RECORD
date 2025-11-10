#include<iostream>
using namespace std;
class Base{
    protected:
    int a;
    public:
    void getA(){
        cout<<"Enter a:";
        cin>>a;
    }
};
class intermediate: public Base{
    protected:
    int b;
    public:
    void getB(){
        cout<<"Enter b:";
        cin>>b;
    }
};
class Derived:public intermediate{
    public:
    void display(){
        cout<<"sum="<<a+b<<endl;
    }
};
int main(){
    Derived obj;
    obj.getA();
    obj.getB();
    obj.display();
    return 0;
}