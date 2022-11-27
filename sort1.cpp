#include <fstream>
#include <iostream>
#include <conio.h>
#include <cmath>
#include <windows.h>
using namespace std;
int largest();
int arr2[5] = {230, 2000, 200, 970, 1050};
int num = sizeof(arr2) / sizeof(arr2[0]);
int new_arr[5];
int main()
{
    for (int i = 0; i < 5; i = i + 1)
    {
        new_arr[i] = largest();
    }
    for (int i = 0; i < 5; i++)
    {

        cout << new_arr[i] << endl;
    }

    return 0;
}
int largest()
{
    int index = 0;
    int max = -1;
    for (int i = 0; i < 5; i++)
    {
        if (arr2[i] > max)
        {
            max = arr2[i];
            index = i;
        }
    }
    arr2[index] = -1;
    return max;
}