#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <stdlib.h>
using namespace std;

struct student
{
    string Name;
    int RollNumber;
    float cgpa;
    student *next;
};
student *Head = NULL;

void addRecord();
void AddToList(string n, int roll, float grades);
student *Get_Last_Record(student *temp);
void Print_Record();
void Print_Single_Record(student *temp);
void Load_To_File();
void File_Handling(student *temp);
student *Search_Name(string n);
void Print_Search_Record(student *temp);

int main()
{
    string name;
    int i = 0;
    while (i < 3)
    {
        addRecord();
        i++;
    }
    Print_Record();
    Load_To_File();
    cout<<"\n\n Enter The Name To Search: ";
    cin>>name;
    Search_Name(name);
    getch();
}
void addRecord()
{
    string name;
    int roll;
    float grades;
    cout << "Name: ";
    cin >> name;
    cout << "Roll Number: ";
    cin >> roll;
    cout << "Grades: ";
    cin >> grades;
    AddToList(name, roll, grades);
}
void AddToList(string n, int roll, float grades)
{
    student *Record = new student;
    Record->Name = n;
    Record->RollNumber = roll;
    Record->cgpa = grades;
    Record->next = NULL;
    if (Head == NULL)
    {
        Head = Record;
    }
    else
    {
        student *temp = Get_Last_Record(Head);
        temp->next = Record;
    }
}
student *Get_Last_Record(student *temp)
{
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp;
}
void Print_Record()
{
    cout << "\n\n Results: \n";
    student *temp = Head;
    while (temp != NULL)
    {
        Print_Single_Record(temp);
        temp = temp->next;
    }
}
void Print_Single_Record(student *temp)
{
    cout << "Name :";
    cout << temp->Name << endl;
    cout << "Roll-Number :";
    cout << temp->RollNumber << endl;
    cout << "CGPA :";
    cout << temp->cgpa << endl;
}
void Load_To_File()
{
    student *temp = Head;
    while (temp != NULL)
    {
        File_Handling(temp);
        temp = temp->next;
    }
}
void File_Handling(student *temp)
{
    fstream file;
    file.open("data.txt", ios::app);
    file << temp->Name << "," << temp->RollNumber << "," << temp->cgpa << endl;
    file.close();
}
student *Search_Name(string n)
{
    bool IsFound=false;
    student *temp=Head;
    while (temp != NULL)
    {
        if(temp->Name == n)
        {
            cout<<"Record Found.";
            IsFound=true;
            break;
        }
        temp=temp->next;
    }
    if (IsFound == false)
    {
        cout<<"Record Doesn't Found.";
    }
    else{
    Print_Search_Record(temp);
    }
}
void Print_Search_Record(student *temp)
{
    cout<<"\n\n\n  Search Result : ";
    cout<<"\nName :";
    cout<<temp->Name;
    cout<<"\nRollNumber :";
    cout<<temp->RollNumber;
    cout<<"\nCGPA :";
    cout<<temp->cgpa;
}