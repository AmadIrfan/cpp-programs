#include <iostream>
using namespace std;
string name[11];
int marks[11];
float avrg = 0;
void Average();
int main()
{
    for (int i = 1; i < 11; i++)
    {
        cout << "Student " << i << endl;
        cout << "Enter Your Name: ";
        cin >> name[i];
        cout << "enter your marks: ";
        cin >> marks[i];
        cout << endl;
    }
    Average();
    cout << "average marks are: " << avrg;
    return 0;
}
void Average()
{
    for (int i = 1; i < 11; i++)
    {
        avrg = avrg + marks[i];
    }
    avrg = avrg / 10;
}