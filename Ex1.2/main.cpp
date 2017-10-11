#include <iostream>
using namespace std;

int main()
{
    int low, high, j;

    cout << "Enter scope (two numbers): "<< "\n";
    cin >> low >> high;

    cout << "Prime numbers in given scope are: "<< "\n" ;

    while (low < high)
    {
        j = 0;

        for(int i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                j = 1;
                break;
            }
        }

        if (j == 0)
            cout << low << "\n";
            ++low;
    }
    return 0;
}