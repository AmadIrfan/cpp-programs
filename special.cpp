#include <iostream>
using namespace std;
int spacial(int num);
int main()
{

    int number;
    cout << "Enter a number  ";
    cin >> number;
    cout << spacial(number);
}

int spacial(int num)
{
    int num1 = 0, num2;
    // if (num <= 9999)
    // {
    for (int i = 100; i <= 200; i++)
    {
        for (int j = i; j != 0; j = j / 10)
        {
            num1 = j % 10;
            if (num1 != 0)
            {
                num2 = num / num1;
               
            }
            if (num1 == 0)
            {
                break;
            }
        }
    }
    // }
}
