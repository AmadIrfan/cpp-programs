// Program to print full star diamond pattern in C++.
#include <iostream>
using namespace std;
void fun(int n);
int main()
{
    int n;
    cout << "Enter The Number Of Rows: ";
    cin >> n;
    fun(n);
}
void fun(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int s = n; s > i; s--)
            cout << " ";
        for (int j = 0; j < i; j++)
            cout << "* ";
        cout << "\n";
    }

    for (int i = 1; i < n; i++)
    {
        for (int s = 0; s < i; s++)
            cout << " ";
        for (int j = n; j > i; j--)
            cout << "* ";
        // ending line after each row
        cout << "\n";
    }
}