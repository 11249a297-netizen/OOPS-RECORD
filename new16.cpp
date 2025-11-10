#include<iostream>
using namespace std;
class sample{
    int x;
    public:
    void setValue(int x){
        this->x=x;
    }
    inline void display(){
        cout<<"Value of x ="<<x<<endl;
    }
};
int main(){
    sample s;
    s.setValue(25);
    s.display();
    return 0;
}
