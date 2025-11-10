#include<iostream>
using namespace std;
template<typename T>
T add(T a,T b){
    return a+b;
}
int main(){
    cout<<"sum(int):"<<add(10,20)<<endl;
    cout<<"sum(float):"<<add(2.5,3.5)<<endl;
    return 0;
}