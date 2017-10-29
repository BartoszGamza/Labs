#include <iostream>
#include <complex>
#include <cmath>

class complex{
private:
    double Re;
    double Im;
public:
    complex(double x, double y){
        Re = x;
        Im = y;
    }
    void print(){
        std::cout <<Re<<" + "<<Im<<"i";
    };

};

int main() {
    complex cl(1.2,3.4);
    cl.print();
    return 0;
}