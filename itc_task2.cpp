#include <iostream>
using namespace std;
void cgpa_finder(int number);
int roll_no[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
double per_a[10] = {2.5, 2.6, 2.7, 2.4, 2.3, 3.4, 3.5, 3.6, 3.7, 3.8};
int main()
{
    int num;
    cout << "Enter roll no for CGPA: ";
    cin >> num;
    cgpa_finder(num);
}
void cgpa_finder(int number)
{
    cout << "Roll no   CGPA " << endl;
    for (int i = 0; i < 9; i++)
    {
        if (roll_no[i] == number)
        {
            cout << roll_no[i] << "   " << per_a[i] << endl;
        }
    }
}