#include <iostream>
// #include <conio.h>
// #include <cmath>
using namespace std;
void printtable(int number);
int main()
{
    int n = 24;
    printtable(n);
    int x = 50;
    printtable(x);
    int y = 29;
    printtable(y);
}
void printtable(int number)
{
    int n;
    for (n = 1; n <= 10; n++)
    {
        cout << number << " * " << n << " = " << number * n << endl;
    }
}