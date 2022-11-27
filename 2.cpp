#include <iostream>
using namespace std;
string Choice[11];
string Answer[11] = {"A", "B", "C", "A", "C", "A", "C", "B", "A", "B"};

int main()
{
    float b, correct = 0, wrong = 0;
    for (int i = 1; i < 11; i++)
    {
        b = 1;
        while (b != 0)
        {
            cout << "Question " << i << ":-" << endl;
            cout << "Enter Your Choice: ";
            cin >> Choice[i];
            if (Choice[i] != "A" && Choice[i] != "B" && Choice[i] != "C")
            {
                cout << "Invalid Choice." << endl;
                continue;
            }
            else
            {
                b = 0;
            }
        }
    }
    cout << endl;
    cout << "Answers Are :" << endl;
    for (int i = 1; i < 11; i++)
    {
        cout << "Question " << i << ":-" << endl;
        if (Choice[i] == Answer[i - 1])
        {
            correct++;
            cout << "Correct Answer."<<endl;
            cout << "Your Choice Is: " << Choice[i] << endl
                 << endl;
        }
        else
        {
            wrong++;
            cout << Answer[i - 1]<<endl;
        }
    }
    correct = correct * 10;
    wrong = wrong * 2.5;
    correct = correct - wrong;
    cout << "Your Marks Are: " << correct;
}