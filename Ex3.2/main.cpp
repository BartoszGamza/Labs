#include <iostream>

using namespace std;

class Vehicle {
private:
public:
    void print(){
        cout <<""<<endl;
    }
};

class Car : Vehicle {
private:
public:
    void print(){
        cout <<""<<endl;
    }
};

class Boat : Vehicle{
private:
public:
    void print(){
        cout <<""<<endl;
    }
};

class Amhibious : Car, Boat {
private:
public:
    void print(){
        cout <<""<<endl;
    }
};


int main() {



    return 0;
}