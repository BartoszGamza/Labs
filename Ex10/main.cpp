#include <iostream>
#include <string.h>

using namespace std;

void encode(string inpt){


    char arr[100];

    strcpy(arr, inpt.c_str());

    for(int i = 0; i < strlen(arr); i++){
            arr[i] ++;
    };

    cout<<"encryption: "<<arr;

};

int main() {
    string input;
    cout<<"Enter sentence: "<<endl;
    cin>>input;
    encode(input);

}