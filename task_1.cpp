#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
void getcake();
void odd(string name, int age);
void even(string name, int age);
void store(string name, int age);
int main()
{
    string name;
    int age;
    cout << "Enter your name ";
    cin >> name;
    cout << "Enter age ";
    cin >> age;
    store(name, age);
    getcake();
}
void store(string name, int age)
{

    fstream file;
    file.open("names.txt", ios::out);
    file << name << " " << age << endl;
    file.close();
}
void even(string name, int age)
{
    cout << "###############" << endl;
    cout << "#"
         << " " << age << " HB " << name << "! " << age;
    cout << "#" << endl;
    cout << "###############" << endl;
}
void odd(string name, int age)
{
    cout << "***************" << endl;
    cout << "*"
         << " " << age << "HB" << name << "!" << age;
    cout << "*" << endl;
    cout << "***************" << endl;
}
void getcake()
{
    string name;
    int age;
    fstream file;
    file.open("names.txt", ios::in);
    file >> name >> age;

    if (age % 2 == 0)
    {
        even(name, age);
    }
    else
    {
        odd(name, age);
    }
    file.close();
}
