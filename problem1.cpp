#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    double height, base = 43.0;
    float angle = 30;
    angle=angle/57.2958;
    // hereh tan() is pre defined function
    height = tan(angle) * base;
    cout << "Height is " << height;
}