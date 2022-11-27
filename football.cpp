#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
int option, num;
int save;
int edit;
int count = 0;
struct football
{
    string name[10];
    string position[10];
    string no_of_touchdowns[10];
    string no_of_catches[10];
    string passing_yards[10];
    string recieving_yards[10];
    string rushing_yards[10];
};
football takeinput()
{
    football data;
    cout << "                       Record Addition                         " << endl
         << endl;
    cout << "how many players do you want to enter           " << endl;
    int num2;
    cin >> num2;
    for (int i = 0; i < num2; i++)
    {
        cout << "Enter the name of " << i + 1 << " player                    =  ";
        cin >> data.name[i];
        cout << "Enter the position of " << i + 1 << " player                =  ";
        cin >> data.position[i];
        cout << "Enter the no of touchdowns of " << i + 1 << " player        =  ";
        cin >> data.no_of_touchdowns[i];
        cout << "Enter the number of catches                 =  ";
        cin >> data.no_of_catches[i];
        cout << "Enter the passing_yards of " << i + 1 << " player           =  ";
        cin >> data.passing_yards[i];
        cout << "Enter the recieving_avards of " << i + 1 << " player        =  ";
        cin >> data.recieving_yards[i];
        cout << "Enter rushing yards of " << i + 1 << " player               =  ";
        cin >> data.rushing_yards[i];
        cout << endl;
        count++;
    }
    return data;
}
void output(football enter)
{
    for (int i = 0; i < count; i++)
    {
        cout << "Name of player is                  -> " << enter.name[i] << endl;
        cout << "Position of player is              -> " << enter.position[i] << endl;
        cout << "No of touchdowns of player is      -> " << enter.no_of_touchdowns[i] << endl;
        cout << "No of catches                      -> " << enter.no_of_catches[i] << endl;
        cout << "No of passsing yards               -> " << enter.passing_yards[i] << endl;
        cout << "Passing_yards of player is         -> " << enter.recieving_yards[i] << endl;
        cout << "Number of rushing yards            -> " << enter.rushing_yards[i] << endl
             << endl;
    }
    cout << "               Press any key to back to menu                   " << endl;
    getch();
}
void mainpage()
{
    system("cls");
    cout << "                                                           " << endl
         << endl;
    cout << "                   What you want to do                     " << endl
         << endl;
    cout << "           1. Add players                                  " << endl;
    cout << "           2. See all players                              " << endl;
    cout << "           3. Edit data                                    " << endl;
    cout << "           4. Exit                                         " << endl
         << endl;
    cin >> option;
}
void mainlogo()
{
    cout << "                                                           " << endl
         << endl;
    cout << "          |%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|         " << endl;
    cout << "          |             FOOTBALL RECORD            |         " << endl;
    cout << "          |%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%|         " << endl;
    getch();
}
void saverecord(football d)
{
    cout << "             Do you want to save your record               " << endl
         << endl;
    cout << "             Press 1 to save or 0 to continue              " << endl;
    cin >> save;
    if (save == 1)
    {
        fstream file;
        file.open("football.txt", ios::out);
        for (int i = 0; i < count; i++)
        {
            file << d.name[i] << "," << d.position[i] << "," << d.no_of_touchdowns[i] << "," << d.no_of_catches[i] << "," << d.passing_yards[i] << "," << d.recieving_yards[i] << "," << d.rushing_yards[i] << endl;
        }

        file.close();
    }
}
string parsedata(string line, int field)
{
    string item;
    int commacount = 1;
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == ',')
        {
            commacount++;
        }
        else if (commacount == field)
        {
            if (line[i] == '\0')
            {
                continue;
            }
            item = item + line[i];
        }
    }
    return item;
}
void load()
{
    football d;
    string word;
    fstream file;
    file.open("football.txt", ios::in);

    while (!file.eof())
    {
        getline(file, word);
        d.name[count] = parsedata(word, 1);
        d.position[count] = parsedata(word, 2);
        d.no_of_touchdowns[count] = parsedata(word, 3);
        d.no_of_catches[count] = parsedata(word, 4);
        d.passing_yards[count] = parsedata(word, 5);
        d.recieving_yards[count] = parsedata(word, 6);
        d.rushing_yards[count] = parsedata(word, 7);
        count++;
    }
    file.close();
}
void editdata()
{
    football data;
    cout << "   Which player data do you want to edit           " << endl;
    cin >> edit;
    for (int i = edit; i < edit + 1; i++)
    {
        cout << "Enter the name of " << i << " player                    =  ";
        cin >> data.name[i];
        cout << "Enter the position of " << i << " player                =  ";
        cin >> data.position[i];
        cout << "Enter the no of touchdowns of " << i << " player        =  ";
        cin >> data.no_of_touchdowns[i];
        cout << "Enter the number of catches                 =  ";
        cin >> data.no_of_catches[i];
        cout << "Enter the passing_yards of " << i << " player           =  ";
        cin >> data.passing_yards[i];
        cout << "Enter the recieving_avards of " << i << " player        =  ";
        cin >> data.recieving_yards[i];
        cout << "Enter rushing yards of " << i << " player               =  ";
        cin >> data.rushing_yards[i];
        cout << endl;
    }
}
main()
{
    football store;
    mainlogo();
    while (option != 4)
    {
        mainpage();
        cout << "                       FOOTBALL PLAYERS DATA           " << endl;
        if (option == 1)
        {
            system("cls");
            mainlogo();
            store = takeinput();
            saverecord(store);
        }
        if (option == 2)
        {
            system("cls");
            mainlogo();
            output(store);
        }
        if (option == 3)
        {
            output(store);
            editdata();
        }
        if (option == 4)
        {
            system("cls");
        }
    }
}