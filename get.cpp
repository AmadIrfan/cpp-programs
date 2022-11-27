#include <fstream>
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
int main()
{

    string name;
    cout << "enter your name ";
    cin.ignore();
    getline(cin, name);
    cout << "Your name is " << name;
    return 0;
}