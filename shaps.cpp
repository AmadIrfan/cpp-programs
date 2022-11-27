#include <iostream>
using namespace std;
int main()
{
    char alpa = 'a';
    for (int i = 1; i < 10; i++)
    {
        for (int k = 10; k > i; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 10; i > 0; i--)
    {
        for (int k = 10; k > i; k--)
        {
            cout << " ";
        }
        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
