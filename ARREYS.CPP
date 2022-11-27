#include <iostream>
#include <cmath>
using namespace std;
main()
{
    string store[10];
    for (int i = 0; i <= 10; i++)
    {
        cout << "Enter name ";
        cin >> store[i];
    }
    cout << store[9]<<endl;
    cout << store[1]<<endl;
    cout << store[5]<<endl;
    cout << store[7]<<endl;
}