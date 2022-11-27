#include <iostream>
#include <fstream>
using namespace std;
void store(string input);
void data();
main()
{
    string input;
    cout << "Enter A String: ";
    getline(cin, input);
    store(input);
    data();
}
void store(string input)
{
    fstream newfile;
    newfile.open("data.txt", ios::out);
    newfile << input << endl;
    newfile.close();
}
void data()
{
    int index = 0;
    string input;
    fstream file;
    file.open("string.txt", ios::in);
    getline(file, input);
    int length = sizeof(input) / sizeof(input[0]);
    for (int idx = 0; idx < length; idx++)
    {
        if (input[idx] == '\"')
        {
            index = idx;
            break;
        }
    }

    for (int i = index; i < 12334; i++)
    {
        if (input[i + 1] == '\"')
        {
            cout << input[i] << "\"";
            break;
        }
        else
        {
            cout << input[i];
        }
    }
    file.close();
}