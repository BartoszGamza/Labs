
#include <iostream>

using namespace std;

class account {

public:

    account() {
        int balance;
        cout <<"Constructing"<< endl;
    };

    void setBalance(int x);

    int getBalance();

    ~account(){
        cout<<" Destructing"<<endl;
    };

private:
    int balance;
};

void account::setBalance(int x) {
    balance = x;
};

int account::getBalance() {
    cout<<"balance is: "<<balance;
};

int main()
{
    account w;
    cout<<"Give balance number"<<endl;
    int input;
    cin>>input;

    w.setBalance(input);
    w.getBalance();

    return 0;

};
