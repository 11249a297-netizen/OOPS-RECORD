#include<iostream>
using namespace std;
class wall{
    private:
    double length;
    double height;
    public:
    wall(double len,double hgt)
    :length{len}
    ,height{hgt}{

    }
    wall(const wall&obj)
    :length{obj.length}
    ,height{obj.height}{

    }
    double calculatearea(){
        return length*height;
    }
};
int main() {
    wall wall1(10.5,8.6);
    wall wall2= wall1;
    cout<<"area of wall1:"<<wall1.calculatearea()<<endl;
    cout<<"area of wall2:"<<wall2.calculatearea();
    return 0;
}