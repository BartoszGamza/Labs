#include <iostream>

using namespace std;

class Vehicle
{

public:
    string Color;
    void SetColor (string Color){
        this->Color = Color;

    };

    void PrintColor();
};
void Vehicle::PrintColor(){
    cout << "Color: " << Color << endl;
}



class Car : virtual public Vehicle {

public:
    int NofSeats;
    void SetNumberOfSeats (int NumberOfSeats){
        this->NofSeats = NumberOfSeats;
    };

    void PrintNumberOfSeats();
};
void Car::PrintNumberOfSeats() {
    cout << "Number of seats: " << NofSeats << endl;
}

class Boat : virtual public Vehicle{

public:
    int doors;
    void TheDoors(int doors){
        this->doors = doors;
    };

    void PrintTheDoors();
};

void Boat::PrintTheDoors() {
    cout << "Number of The Dooors: " << doors << endl;
}

class Amhibious : public Car,  public Boat {

public:
    int price;
    void GetPrice (int price){
        this->price = price;
    };

    void PrintPrice();
};

void Amhibious::PrintPrice() {
    cout <<"Price: " << price << endl;
}
int main() {

    Amhibious *NoWheels = new Amhibious;
    NoWheels->GetPrice(1000000);

    cout << "Please enter details you want your amhibious to have: " << endl;

    // colorset
    string col;
    cout << "We will begin with color: "<< endl;
    cin>>col;

    NoWheels->SetColor(col);


    // seats
    int seat;
    cout << "Now enter number of passenggers you want to escape with (dont forget about yourself): "<<endl;
    cin>>seat;

    NoWheels->SetNumberOfSeats(seat);

    // doors
    int deDoors;
    cout << "The Doors now: "<<endl;
    cin>>deDoors;
    NoWheels ->TheDoors(deDoors);

    //fin
    cout << "Okay we done, your vehicle details are printed below: "<< endl;




    NoWheels->PrintPrice();
    NoWheels->PrintColor();
    NoWheels->PrintNumberOfSeats();
    NoWheels->PrintTheDoors();





    delete NoWheels;

    return 0;
}