#include <iostream>
using namespace std;
bool alpha(int num);
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << alpha(num);
}
bool alpha(int num)
{
    int a = 0;
    for (int i = num; i != 0; i = i / 10)
    {
        int z = num % 10;
        a = a + z;
    }
    if (num % a == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}