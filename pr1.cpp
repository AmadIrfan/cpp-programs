#include <fstream>
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{
    // string name;
    // cout << "enter a name ";
    // cin >> name;
    string arr[5] = {"amad", "SAAD", "jawad", "usama", "umair"};
    int arr2[5] = {230, 2000, 200, 970, 1050};
    int priece;
    int max = -1, index = 0, index2 = 0;
    int min = 32000;
    // orignal_p = 500;
    cout << "sall is \n ";
    for (int i = 0; i < 5; i = i + 1)
    {
        if (arr2[i] > max)
        {
            max = arr2[i];
            index = i;
        }
        if (arr2[i] < min)
        {
            min = arr2[i];
            index2 = i;
        }
        cout << arr[i] << arr2[i] << endl;
    }
    cout << "heigest sall is \n ";
    cout << arr[index] << arr2[index] << endl;
    cout << "lowest sall is \n ";
    cout << arr[index2] << arr2[index2] << endl;
}