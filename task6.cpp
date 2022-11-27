/*A fruit shop during week days sells in the following prices:
Write a program that reads from the console a fruit (banana / apple / …), a day of the week
(Monday / Tuesday / …) and a quantity (a decimal number) and calculates the price
according to the prices from the tables above. Print “error” if it is an invalid day of the week or
an invalid name of a fruit*/

#include <iostream>
using namespace std;
int main()
{
    string days, fruit;
    int quantity;
    float total;
    cout << "Enter the day of week ";
    cin >> days;
    cout << "Enter fruit name ";
    cin >> fruit;
    cout << "Enter quantity ";
    cin >> quantity;

    if ((days != "monday" && days != "tuesday") && days != "wednesday" && days != "thursday" && days != "friday" && days != "saturday" && days != "sunday")
    {
        cout << "invalid day";
    }
        if ((fruit != "grapes" && fruit != "banana") && fruit != "grapefruit" && fruit != "kiwi" && fruit != "orange" && fruit != "pineapple" && fruit != "apple")
        {
            cout << "invalid fruit";
        }
    if ((days == "monday" && days == "tuesday") && days == "wednesday" && days == "thursday" && days == "friday" && days == "saturday")
    {
        if (fruit == "banana")
        {
            total = quantity * 2.50;
        }
        if (fruit == "apple")
        {
            total = quantity * 1.20;
        }
        if (fruit == "orange")
        {
            total = quantity * 0.85;
        }
        if (fruit == "grapefruit")
        {
            total = quantity * 1.45;
        }
        if (fruit == "kiwi")
        {
            total = quantity * 2.70;
        }
        if (fruit == "pineapple")

        {

            total = quantity * 5.50;
        }
        if (fruit == "grapes")
        {
            total = quantity * 3.85;
        }
    }
    if (days == "sunday")
    {
        if (fruit == "banana")
        {
            total = quantity * 2.70;
        }
        if (fruit == "apple")
        {
            total = quantity * 1.25;
        }
        if (fruit == "orange")
        {
            total = quantity * 0.90;
        }
        if (fruit == "grapefruit")
        {
            total = quantity * 1.60;
        }
        if (fruit == "kiwi")
        {
            total = quantity * 3.00;
        }
        if (fruit == "pineapple")
        {

            total = quantity * 5.60;
        }
        if (fruit == "grapes")
        {
            total = quantity * 4.20;
        }
    }
    cout <<  "\n your total prices is" << total << endl;
}