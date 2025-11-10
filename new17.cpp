#include<iostream>
using namespace std;
class shape{
    public:
    virtual void area()=0;
};
class circle:public shape{
    float r;
    public:
    void area(){
        cout<<"Enter radius:";
        cin>>r;
        cout<<"area of circle="<<3.14*r*r<<endl;
    }
};
int main(){
    shape*s;
    circle c;
    s=&c;
    s->area();
    return 0;
}