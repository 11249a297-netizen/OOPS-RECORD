#include<iostream>
using namespace std;
class Base1{
    protected:
    int a;
    public:
    void getA(){
        cout<<"Enter value of a:";
        cin>>a;
    }
};
class Base2{
    protected:
    int b;
    public:12
    void getB(){
        cout<<"Enter value 0f b:";
        cin>>b;
    }
};
class Derived:public Base1,public Base2{
    public:
    void Sum(){
        cout<<"sum="<<a+b<<endl;
    }
};
int main(){
    Derived d;
    d.getA();
    d.getB();
    return 0;
}