#include <iostream>
using namespace std;
struct student
{
    string name;
    int roll;
    float gpa;
};
student input()
{
    student stu;
    cout << "Enter name  ";
    cin >> stu.name;
    cout << "Roll no.=";
    cin >> stu.roll;
    cout << "CGPA=";
    cin >> stu.gpa;
    return stu;
}
void print(student stu)
{
    cout << stu.name << endl;
    cout << stu.roll << endl;
    cout << stu.gpa << endl;
}

int main()
{
    student x[3];
    for (int i = 0; i < 3; i++)
    {
        x[i] = input();
    }
    for (int i = 0; i < 3; i++)
    {
        print(x[i]);
    }
    return 0;
}