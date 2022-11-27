#include <iostream>
using namespace std;
int b;
int main()
{
    int desc = 0;
    cout << "Enter The Number of Numbers You want to enter: ";
    cin >> b;
    float num[b];
    for (int i = 0; i < b; i++)
    {
        cout << "Enter Number: ";
        cin >> num[i];
    }
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (num[i] < num[j])
            {
                desc = num[i];
                num[i] = num[j];
                num[j] = desc;
            }
        }
    }
    cout << "Numbers by sortings are: " << endl;
    for (int i = 0; i < b; i++)
    {
        cout << num[i] << endl;
    }
    // for (int i = 0; i < b; i++)
    // {
    //     if (num[i+1]==num[i]+1)
    //     {
    //         continue;
    //     }
    //     if (num[i]!=num[i]+1)
    //     {
    //         cout<<"Missing Number Is: ";
    //         cout<<(num[i]+1);
    //         break;
    //     }

    // }
}