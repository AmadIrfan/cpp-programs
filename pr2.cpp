#include <fstream>
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{
    int n;
    int arr[n];
    cout << "Ener a number you want to enter ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = -1;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                max = arr[j];
                arr[j] = arr[i];
                arr[i] = max;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}