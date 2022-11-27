#include <iostream>
#include <fstream>
using namespace std;
string name[10];
int orders[10];
int prices1[10];
int main()
{
    int option;
    cout << "Press 1 To Enter Data & 2 To Check Result:......";
    cin>>option;
    if (option == 1)
    {
        for (int i = 0; i < 10; i++)
        {
            int option;
            cout << "Enter The Customer: ";
            cin >> name[i];
            cout << "Enter Total Orders: ";
            cin >> orders[i];
            for (int j = 0; j < orders[i]; j++)
            {
                cout << "Enter The " << j + 1 << " Order Price: ";
                cin >> prices1[j];
            }
            fstream file;
            file.open("customer.txt", ios::app);
            file << name[i] << " " << orders[i] << " [";
            for (int k = 0; k < orders[i]; k++)
            {
                if (k < orders[i] - 1)
                {
                    file << prices1[k] << ",";
                }
                else if (k == orders[i] - 1)
                {
                    file << prices1[k] << "]" << endl;
                    break;
                }
            }
            cout << "Press 1 To Enter More Data & 2 To Check Result:......";
            cin >> option;
            if (option == 1)
            {
                continue;
            }
            if (option == 2)
            {
                break;
            }
        }
    }
    if (option == 2)
    {
    }

    return 0;
}