#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int number[5];
    cout << "enter 5 numbers : ";
    for (int i = 0; i < 5; i++)
    {
        cin >> number[i];
    }
    cout << "this is numbers ";
    for (int n = 0; n < 5; n++)
    {
        cout << number[n] << " ";
    }

    return 0;
}