#include <iostream>
using namespace std;
int test[100];
void PeakValue(int b);
int main()
{
    int b;
    cout << "How many Elements you want to Enter: ";
    cin >> b;
    cout << "Enter Values: ";
    for (int i = 0; i < b; i++)
    {
        cin >> test[i];
    }
    PeakValue(b);
}
void PeakValue(int b)
{
    cout << endl;
    cout << "Peak Values Are: ";
    for (int i = 1; i < b-1; i++)
    {
        if (test[i - 1] < test[i] && test[i] > test[i + 1])
        {
            cout << test[i] << " ";
        }
    }
}
