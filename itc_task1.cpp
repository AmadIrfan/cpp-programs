#include <iostream>
using namespace std;
int roll_no[6] = {1, 2, 3, 4, 5, 6};
int age_a[6] = {25, 26, 27, 24, 23, 34};
string name_a[6] = {"Yasir", "Aleeza", "Liaba", "moazam", "uzair", "Amad"};
void age_d();
int main()
{
    age_d();
    return 0;
}
void age_d()
{
    cout << "roll no "
         << "Name "
         << " Age " << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << roll_no[i] << "    " << name_a[i] << "  " << age_a[i] << endl;
    }
}