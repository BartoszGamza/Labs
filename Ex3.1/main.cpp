#include <iostream>
#include <cmath>

using namespace std;

class complex{
private:
    double Re;
    double Im;
public:
    complex(){
        Re = 0;
        Im = 0;
    }
    complex(double x, double y){
        Re = x;
        Im = y;
    }
    void print(){
        cout<<Re<<" + "<<Im<<"i"<<endl;
    };

    friend complex sum(complex c1, complex c2);
    friend complex sub(complex c1, complex c2);
    friend complex mul(complex c1, complex c2);
    friend complex div(complex c1, complex c2);
};

complex sum(complex c1, complex c2){
    complex c3;
    c3.Re = c1.Re + c2.Re;
    c3.Im = c1.Im + c2.Im;
    return c3;
}

complex sub(complex c1, complex c2){
    complex c3;
    c3.Re = c1.Re - c2.Re;
    c3.Im = c1.Im - c2.Im;
    return c3;
}

complex mul(complex c1, complex c2){
    complex c3;
    c3.Re = (c1.Re * c2.Re) - (c1.Im * c2.Im);
    c3.Im = (c1.Re * c2.Im) + (c2.Re * c1.Im);
    return c3;
}

complex div(complex c1, complex c2){
    complex c3;
    c3.Re = ((c1.Re * c2.Re) + (c1.Im * c2.Im)) / (pow(c2.Re,2.0) + pow(c2.Im,2.0));
    c3.Im = ((c1.Im * c2.Re) - (c1.Re * c2.Im)) / (pow(c2.Re,2.0) + pow(c2.Im,2.0));
    return c3;
}

int main() {
    double r1;
    double i1;
    double r2;
    double i2;

   cout<<"Type in first complex number real and imaginary parts: "<<endl;
    cin>>r1;
    cin>>i1;
    complex c1;
    c1 = complex(r1,i1);

    cout<<"Type in second complex number real and imaginary parts: "<<endl;
    cin>>r2;
    cin>>i2;
    complex c2;
    c2 = complex(r2,i2);

    cout<<"You entered following complex numbers: "<<endl;
    c1.print();
    c2.print();

    //ADDITION
    cout<<"The product of addition: ";
    complex c3;
    c3 = sum(c1,c2);
    c3.print();

    //SUBSTRACTION
    cout<<"The product of substraction: ";
    complex c4;
    c4 = sub(c1,c2);
    c4.print();

    //MULTIPLICATION
    cout<<"The product of multiplication: ";
    complex c5;
    c5 = mul(c1,c2);
    c5.print();

    //(JOY) DIVISION
    cout<<"The product of division: ";
    complex c6;
    c6 = div(c1,c2);
    c6.print();

    return 0;
}