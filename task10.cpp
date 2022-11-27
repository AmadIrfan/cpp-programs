#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int num[10], min;
    cout << "enter 10 numbers ";
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
    }
    min = num[0];
    for (int j = 0; j < 10; j++)

    {
        if (num[j] < min)
        {
            min = num[j];
        }
    }
    cout << min << " is smallest number in array ";

    return 0;
}