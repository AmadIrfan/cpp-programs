#include <iostream>
#include <fstream>
using namespace std;
void GetOrders(int ord, int pr);
string name[10];
int orders[10];
int prices1[10];
int main()
{
    int option;
    cout << "Press 1 To Enter Data & 2 To Check Result:......";
    cin >> option;
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
            cout << "Press 1 To Enter More Data & Go Back:......";
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
        int ord, pr;
        cout << "Enter The Total Orders You Want To Check: ";
        cin >> ord;
        cout << "Enter The Max Price: ";
        cin >> pr;
        GetOrders(ord, pr);
    }

    return 0;
}
void GetOrders(int ord, int pr)
{
    int idx = 0;
    string line;
    fstream file;
    string prices[1000];
    file.open("customer.txt", ios::in);
    while (!file.eof())
    {
        string orders2[100], name, order3;
        int order4;
        file >> name >> order4 >> order3;
        int length = sizeof(order3) / sizeof(order3[0]);
        if (idx == 0)
        {
            fstream newfile;
            newfile.open("1stcustomer.txt",ios::out);
            for (int i = 1; i < length; i++)
            {
                if (order3[i] != ']')
                {
                    newfile << order3[i];
                }
            }
            newfile.close();
        }
        if (idx == 1)
        {
            fstream newfile;
            newfile.open("2ndcustomer.txt",ios::out);
            for (int i = 1; i < length; i++)
            {
                if (order3[i] != ']')
                {
                    newfile << order3[i];
                }
            }
            newfile.close();
        }
        idx = 1;

    }
}