#include<iostream>
using namespace std;
namespace college{
    void display(){
        cout<<"Welcome to the university portal!"<<endl;
    }
}
int main(){
    college::display();
    return 0;
}