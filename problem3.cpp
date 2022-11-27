#include <iostream>
#include <cmath>
using namespace std;
int calculator1(int num1, int num2);
int calculator2(int num1, int num2);
int calculator3(int num1, int num2);
int main()
{
    int result, number1, number2;
    char optr;
    cout << "Enter 1st number ";
    cin >> number1;
    cout << "Enter 2nd number ";
    cin >> number2;
    cout << "Enter operater ";
    cin >> optr;
    if (optr == '+')
    {
        result = calculator1(number1, number2);
    }
    if (optr == '*')
    {
        result = calculator2(number1, number2);
    }
    if (optr == '/')
    {
        result = calculator3(number1, number2);
    }
    cout << "your result is " << result;
}

int calculator1(int num1, int num2)
{

    int as = num1 + num2;
    return as;
}
int calculator2(int num1, int num2)
{
    int am = num1 * num2;
    return am;
}
int calculator3(int num1, int num2)
{
    int ad = num1 / num2;
    return ad;
}


