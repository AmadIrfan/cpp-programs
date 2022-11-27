#include <fstream>
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
void setter(string name, int marks, string grade);
void getter();
void file();
string parse(string data, int column);
int main()
{
    file();
    getter();
    return 0;
}
void file()
{
    fstream new_file;
    string name, grade;
    int marks;
    cout << "Enter name ";
    cin >> name;
    cout << "Enter marks ";
    cin >> marks;
    cout << "Enter grade ";
    cin >> grade;
    setter(name, marks, grade);
}
void setter(string name, int marks, string grade)
{
    fstream file;
    file.open("My.Cato.txt", ios::out);
    file << name << "," << marks << "," << grade;
    file.close();
}
void getter()
{
    string data;
    fstream f;
    f.open("My.Cato.txt", ios::in);
    while (!f.eof())
    {
        f >> data;
        string name = parse(data, 1);
        int marks = stoi(parse(data, 2));
        string grade = parse(data, 3);
        cout<<name<<marks<<grade<<endl;
    }
    f.close();
}
string parse(string data, int column)
{
    string item;
    int index = 0;
    char ch;
    int comma_count = 1;
    while (true)
    {
        ch = data[index];
        if (ch == '\0')
        {
            return item;
        }
        if (ch == ',')
        {
            comma_count++;
        }
        else if (comma_count == column)
        {
            item = item + ch;
        }
        index++;
    }
    return item;
}