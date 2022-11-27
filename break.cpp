#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int num, num1, n, num2, num3=0;
    cout << "Enter a number ";
    cin >> num;
    for (int i = num; i != 0; i = i / 10)
    {
        num1 = i % 10;
        n++;
        num2 = pow(num1, n);
        num3 = num3 + num2;
    }
        cout << "result = ";
        cout << num3 << endl;
    return 0;
}