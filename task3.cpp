/*Jack is a teacher who needs a program that helps him to compile 8th class results. He has five subjects
(English, Maths, Chemistry, Social Science, and Biology) marked in detail. Program asks the user to enter
five subjects' marks, including student name and displays the total marks, percentage, grade (by
percentage), and student name. Every subject has a total of 100 marks. Grading policy details are
mentioned below*/

//header files
#include <iostream>
using namespace std;
int main()
{
    //variable declared
    int english, maths, chemistry, social_science, biology;
    string grade, name;
    float total, per;
    //input
    cout << "Enter Students Name ";
    cin >> name;
    cout << "Enter marks of English ";
    cin >> english;
    cout << "Enter marks of Chemistry ";
    cin >> chemistry;
    cout << "Enter marks of Math ";
    cin >> maths;
    cout << "Enter marks of social sciences ";
    cin >> social_science;
    cout << "Enter marks of Biology ";
    cin >> biology;
    total = english + maths + chemistry + social_science + biology;
    per = (total / 500.0) * 100.0;
    if (per >= 91 && per <= 100)
    {
        grade = "A+";
    }
    if (per >= 81 && per <= 90)
    {
        grade = "A";
    }
    if (per >= 71 && per <= 80)
    {
        grade = "B+";
    }
    if (per >= 61 && per <= 70)
    {
        grade = "B";
    }
    if (per >= 51 && per <= 60)
    {
        grade = "C";
    }
    if (per >= 41 && per <= 50)
    {
        grade = "D";
    }
    if (per >= 0 && per <= 40)
    {
        grade = "F";
    }
    cout << "Student NAME " << name << endl;
    cout << "Total marks " << total << endl;
    cout << "Obtained persentage " << per <<" %" <<endl;
    cout << "Obtained grade " << grade << endl;
}
