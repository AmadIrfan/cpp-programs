// #include <fstream>
#include <iostream>
#include <conio.h>
// #include <cmath>
using namespace std;
int main()
{
    int size;
    cout << "How many names you want to enter ";
    cin >> size;
    system("cls");
    string names[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter name " << (i + 1) << " of the list : ";
        // cin>>names1[i];
        cin.ignore();
        getline(cin, names[i]);
    }
    for (int i = 0; i < size; i++)
    {
      //  string new_name = names[2];
        cout << names[2] << " ";
        // cout << new_name[0] << endl;
    }
        return 0;
}