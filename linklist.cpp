#include <fstream>
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
struct student
{
    int rollno;
    string name;
    double gpa;
    student *next;
};
student *head = NULL;
student *getlastrecord(student *temp);
void addrecord(string name, int roll, double cgpa);
student printsingalrecord(student *temp);
student *getlastrecord(student *temp);
void printrecord();
int main()
{
    string name, nam;
    int roll;
    double cgpa;
    cout << "Enter your name ";
    cin >> name;
    cout << "Enter your cgpa ";
    cin >> cgpa;
    cout << "Enter your roll no";
    cin >> roll;
    addrecord(name, roll, cgpa);
    printrecord();
    return 0;
}
void addrecord(string name, int roll, double cgpa)
{
    student *record = new student;
    record->name = name;
    record->gpa = cgpa;
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
        printsingalrecord(temp);
        temp = temp->next;
    }
}
student printsingalrecord(student *temp)
{
    cout << "name " << temp->name << endl;
    cout << "GPA " << temp->gpa << endl;
    cout << "Roll no " << temp->rollno << endl;
}