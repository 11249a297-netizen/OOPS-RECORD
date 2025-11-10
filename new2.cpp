#include<iostream>
using namespace std;
class wall{
 private:
 double length{5.5};
 public:
 wall()=default;
 void print_length(){
    cout<<"length="<<length<<endl;
 }
};
int main(){
    wall wall1;
    wall1.print_length();
    return 0;
}