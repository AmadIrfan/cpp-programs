#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdio.h>
// #include <cmath>
using namespace std;
typedef struct good
{
    string name;
    int age;
    int roll_no;
    string adress;
    float cgpa;
} amad;
void output(string name, int age, string adress, int roll_no, double cgpa);
main()
{
    good amad;
    // ai.name = "amad irfan ";
    // ai.age = 15;
    // ai.adress = "Bhakkar";
    // ai.cgpa = 3.5;
    // cout << ai.name << ai.age << ai.adress << ai.cgpa;
    cout << "Enter your name ";
    // cin.ignore();
    // getline(cin, amad.name);
    cin >> amad.name;
    cout << "Enter your age ";
    cin >> amad.age;
    cout << "Enter your adress ";
    cin >> amad.adress;
    cout << "Enter your roll no ";
    cin >> amad.roll_no;
    cout << "Enter your cgpa ";
    cin >> amad.cgpa;
    output(amad.name, amad.age, amad.adress, amad.roll_no, amad.cgpa);
    // return 0;
}
void output(string name, int age, string adress, int roll_no, double cgpa)
{
    cout << " name \t age \t adress \t roll_no \t cgpa" << endl;
    cout << name << "\t" << age << "\t" << adress << "\t" << roll_no << "\t" << cgpa << "\t" << endl;
}
