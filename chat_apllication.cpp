#include <iostream>
// #include <conio.h>
// #include <cmath>
// #include <string.h>
using namespace std;
main()
{
    int a2 = 32;
    string b = " ";
    string new1;
    int size;
    cout << "How many names you want to enter ";
    cin >> size;
    system("cls");
    string names1[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter name "<<(i+1)<<" of the list : ";
        //cin>>names1[i];
        getline(cin, names1[i]);
    }
    for (int i = 0; i < size; i++)
    {
        new1 = names1[i];
        cout<<names1[i]<<endl;
        cout << new1[0]<<" ";
    }
}