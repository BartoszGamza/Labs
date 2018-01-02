#include <iostream>

using namespace std;

class Vehicle {

public:
    string Color;
    void SetColor (string Color){
        this->Color = Color;
    };

    void PrintColor();

    friend class OneTrace;
    friend class Bicycle;
};

void Vehicle::PrintColor(){
    cout << "Color: " << Color << endl;
};

class OneTrace: public Vehicle {

public:
    int NumberOfWheels = 2;

    void PrintNumberOfWheels();
};

void OneTrace::PrintNumberOfWheels(){
    cout << "Wheels " << NumberOfWheels << endl;
};

class Bicycle: public OneTrace {

public:
    int NumberOfSeats;
    void SetNumberOfSeats (int NumberOfSeats){
        this->NumberOfSeats = NumberOfSeats;
    };
    void PrintNumberOfSeats();
};

void Bicycle::PrintNumberOfSeats(){
    cout << "Seats: " << NumberOfSeats << endl;
};


int main() {

    cout << "Bicycle class parameters: " << endl << endl;

    Bicycle *vroom = new Bicycle;

    int sts;
    cout << "number of seats: "<<endl;
    cin>>sts;
    vroom->SetNumberOfSeats(sts);

    string clr;
    cout<<"color: "<<endl;
    cin>>clr;
    vroom->SetColor(clr);

    cout<<"chosen parameters for bicycle are: "<<endl;
    vroom->PrintNumberOfSeats();
    vroom->PrintNumberOfWheels();
    vroom->PrintColor();

    delete vroom;


    return 0;
}