#include <iostream>
// #include <conio.h>
using namespace std;
int frecqcheck(int num, int digit);
int main()
{
    int num, digit;
    cout << "Enter a number";
    cin >> num;
    cout << "Enter a digit to find ";
    cin >> digit;
    cout << frecqcheck(num, digit);
}
int frecqcheck(int num, int digit)
{
    int count = 0;
    for (int i = num; i != 0; i = i / 10)
    {
        if (i % 10 == digit)
        {
            count++;
        }
    }
    return count;
}
