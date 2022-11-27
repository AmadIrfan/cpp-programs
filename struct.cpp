#include <fstream>
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
struct nametype
{
    string first;
    string last;
};
struct coursetype
{
    string coursename;
    int call_no;
    int credits;
    char grade;
};
struct studenttype
{
    nametype name;
    double gpa;
    coursetype course;
};
int main()
{
    studenttype student;
    studenttype classlist[3];
    coursetype course;
    nametype name;
    student.gpa = 3.70;
    student.name.last = "amad";
    classlist[1]->name.first="irfan";
    classlist[0].callname=0;

    
    // cout << "enter your first name ";
    // cin.ignore();
    // getline(cin, student);
    // cout << "enter your last name ";
    // cin >> amad.last;
    // cout << amad.first << amad.last;
    return 0;
}