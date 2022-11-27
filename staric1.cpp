#include <iostream>
using namespace std;
main()
{
    int num;
    cout<<"Enter number ";
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        for (int k = num; k >= i; k--)
        {
            cout << " ";
        }

        for (int j = 1; j <= (i * 2) - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i = num-1; i >= 1; i--)
    {
        for (int k = num; k >= i; k--)
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