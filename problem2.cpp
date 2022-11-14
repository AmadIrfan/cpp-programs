#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int  a=5, b=6, c=1;
    float x, x1;
    cout << "5x^2+6^x+1=0";
    cout << endl
         << "a=5  b=6  c=1"<<endl;
    x = (((-b) + sqrt(pow(b, 2) - (4 * a * c))) / (2 * a));
    x1 = (((-b) - sqrt(pow(b, 2) - (4 * a * c))) / (2 * a));
    cout << "x = " << x << " x= " << x1;
}