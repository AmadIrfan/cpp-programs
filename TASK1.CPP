/* Write a C++ program to print the appropriate activity depending on the variable temperature and humidity
 value. The table below assumes that the temperature can only be warm and cold, and the humidity can
 only be dry and humid.*/
//header files
#include <iostream>
using namespace std;
int main()
{
    //variable declared
    string temprature, humidity;
    cout << " Temperature is ";
    cin >> temprature;
    cout << " humidity is ";
    cin >> humidity;
    //condition 1
    if (temprature == "warm" && humidity == "dry")
    {
        cout << "Play tennis";
    }
    //condition 2
    if (temprature == "warm" && humidity == "humid")
    {
        cout << "swim";
    }
    //condition 3
    if (temprature == "cold" && humidity == "dry")
    {
        cout << "Play basketball";
        //condition 4
    }
    if (temprature == "cold" && humidity == "humid")
    {
        cout << "Watch tv";
    }
}