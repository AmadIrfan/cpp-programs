#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int number[] = {4, 6, 7, 8, 9, 20}, sum = 0;
    double avg;
    cout << "The numbers are: " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << number[i] << " ";
        sum = sum + number[i];
    }
    cout << "\n their sum= " << sum << endl;
    avg = sum / 6.0;
    cout << "Their average =" << avg << endl;
    return 0;
}