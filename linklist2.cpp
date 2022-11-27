#include <fstream>
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
struct student
{
    int rollno;
    double cgpa;
    string name;
    student *next;
};
student *head = NULL;
student *getlastrecord(student *temp);
void addrecord(string name, int roll, double gpa);
void printrecord();
void getsinglerecord(student *temp);
void searchrecord(string nam);
int main()
{
    int roll;
    double gpa;
    string name, nam;
    cout << "Enter your name ";
    cin >> name;
    cout << "Enter your cgpa ";
    cin >> gpa;
    cout << "Enter your roll no";
    cin >> roll;
    addrecord(name, roll, gpa);
    printrecord();
    cout << "Enter your name ";
    cin >> nam;
    searchrecord(nam);
    return 0;
}
void addrecord(string name, int roll, double gpa)
{
    student *record;
    record = new student;
    record->name = name;
    record->cgpa = gpa;
    record->rollno = roll;
    record->next = NULL;
    if (record->next == NULL)
    {
        head = record;
    }
    else
    {
        student *temp = getlastrecord(head);
        temp->next = record;
    }
}
student *getlastrecord(student *temp)
{
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp;
}
void printrecord()
{
    student *temp = head;
    while (temp != NULL)
    {
        getsinglerecord(temp);
        temp = temp->next;
    }
}
void getsinglerecord(student *temp)
{
    cout << "name " << temp->name << endl;
    cout << "roll no " << temp->rollno;
    cout << "\n cgpa " << temp->cgpa << endl;
}
void searchrecord(string nam)
{
    student *temp = head;
    bool isfound = false;
    while (temp != NULL)
    {
        if (temp->name == nam)
        {
            cout << "Record is found ";
            isfound = true;
            break;
        }
    }
    if (isfound == false)
    {
        cout << "Record is not found ";
    }
}