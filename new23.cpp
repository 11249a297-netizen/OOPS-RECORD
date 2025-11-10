#include<iostream>
#include<csignal>
#include<cstdlib>
using namespace std;
void signalHandler(int signum){
    cout<<"\nInterrupt signal("<<signum<<")received.\n";
    exit(signum);
}
int main(){
    signal(SIGINT,signalHandler);
    while(1){
        cout<<"running...press ctrl+c to stop.\n";
        for(volatile int i=0;i<100000000;++i);
    }
    return 0;
}