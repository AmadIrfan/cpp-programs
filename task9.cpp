#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int num[10];
    cout << "enter 10 numbers : ";
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
    }
    for (int i = 9; i >= 0; i--)
    {
        cout << num[i] << " ";
    }

    return 0;
}