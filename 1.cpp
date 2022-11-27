#include <fstream>
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{
    int a = 5;
    int *apr = &a;
    cout << a << endl;
    *apr = 10;
    cout << apr << endl;
    apr++;
    cout << apr << endl;
    return 0;
}