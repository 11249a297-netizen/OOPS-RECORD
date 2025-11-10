#include <iostream>
using namespace std;
class time
{
    int hrs;
    int mins;
public:
    void gettime(int h,int m)
    {
        hrs=h;
        mins=m;
    }
    void puttime(void){
        
        cout<<hrs<<"hours"
        <<mins<<"minutes"<<endl;
    }
    void sum(time,time);
};
void time::sum(time t1, time t2)

{
    mins=t1.mins+t2.mins;
    hrs=mins/60;
    mins=mins%60;
    hrs=hrs+t1.hrs+t2.hrs;
}
int main()
{
    class time t1,t2,t3;
    t1.gettime(2,45);
    t2.gettime(3,30);
    t3.sum(t1,t2);
    t1.puttime();
    t2.puttime();
    t3.puttime();
    return 0;

}