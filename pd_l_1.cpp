#include <fstream>
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
struct name1
{
    string first;
    string last;
};
struct coursetype
{
    name1 name;
    int score;
};

int main()
{
    coursetype student;
    cout << "Enter your name ";
    cin >> student.name.first;
    // cin >> student.score;
    return 0;
}
