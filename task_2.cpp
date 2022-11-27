/*Create a function that takes the length, width, height (in meters) and output unit in which you want to
aefasdfsafeassee the answer and returns the volume of a pyramid in the correct unit.
Notes:
● The units used are limited to: millimeters, centimeters, meters and kilometers.
● Ensure you return the answer and add the correct unit in the format cubic <unit>.*/
#include <iostream>
using namespace std;
double converter(double volume, char che);
int main()
{
    long long int length, width, height;
    char unit;

    double volume;
    cout << "Enter length of Pyramid ";
    cin >> length;
    cout << "Enter width of Pyramid ";
    cin >> width;
    cout << "Enter height of Pyramid ";
    cin >> height;
    cout << "Enter unit c for centimeters, k for kilometer or m for milimeter ";
    cin >> unit;
    volume = (length * width * height) / 3.0;
    cout << converter(volume, unit);
    // cout << volume/1000000000.0;
}
double converter(double volume, char che)
{

    double result;
    if (che == 'c')
    {
        result = volume * 1000000;
    }
    else if (che == 'k')
    {
        result = volume / 1000000000.0;
    }
    else if (che == 'm')
    {
        result = volume * 1000000000;
    }
    return result;
}