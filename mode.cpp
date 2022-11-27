// #include <fstream>
#include <iostream>
// #include <conio.h>
// #include <cmath>
using namespace std;
int main()
{
    int num, count;
    cout << "Enter a number ";
    cin >> num;
    for (int i = num; i != 0; i = i / 10)
    {
        i = i % 10;
        count++;
    }
    cout << count;
// 
    return 0;
}