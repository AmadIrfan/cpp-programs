#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
int manu();
int internal_manu();
void manu_top();
char arr_airline[13][6] = {
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'},
    {'*', '*', '*', '*', '*', '*'}};
int main()
{
    int input, internal_input;
    while (input < 3)
    {
        manu_top();
        input = manu();
        if (input == 1)
        {
            manu_top();
            while (internal_input > 3)
            {
                cout << "\t";
                for (int i = 1; i < 7; i++)
                {
                    cout << i << "  ";
                }
                cout << endl;
                for (int i = 00; i < 13; i++)
                {
                    cout << "Row " << i + 1 << "  ";

                    for (int j = 0; j < 6; j++)
                    {
                        cout << arr_airline[i][j] << "  ";
                    }
                    cout << endl;
                }
                internal_input = 0;
                while (internal_input < 4)
                {
                    internal_input = internal_manu();

                    if (internal_input == 1)
                    {
                        manu_top();
                        cout << "\t";
                        for (int i = 1; i < 7; i++)
                        {
                            cout << i << "  ";
                        }
                        cout << endl;
                        for (int i = 0; i < 2; i++)
                        {
                            cout << "Row " << i + 1 << "  ";

                            for (int j = 0; j < 6; j++)
                            {
                                cout << arr_airline[i][j] << "  ";
                            }
                            cout << endl;
                        }
                    }
                    if (internal_input == 2)
                    {
                        manu_top();
                        cout << "\t";
                        for (int i = 1; i < 7; i++)
                        {
                            cout << i << "  ";
                        }
                        cout << endl;
                        for (int i = 2; i < 8; i++)
                        {
                            cout << "Row " << i + 1 << "  ";

                            for (int j = 0; j < 6; j++)
                            {
                                cout << arr_airline[i][j] << "  ";
                            }
                            cout << endl;
                        }
                    }
                    if (internal_input == 3)
                    {
                        manu_top();
                        cout << "\t";
                        for (int i = 1; i < 7; i++)
                        {
                            cout << i << "  ";
                        }
                        cout << endl;
                        for (int i = 8; i < 13; i++)
                        {
                            cout << "Row " << i + 1 << "  ";

                            for (int j = 0; j < 6; j++)
                            {
                                cout << arr_airline[i][j] << "  ";
                            }
                            cout << endl;
                        }
                    }
                    if (internal_input == 4)
                    {
                        getch();
                    }
                }
            }
        }

        if (input == 2)
        {
        }
    }
}

int manu()
{
    int input;
    cout << "\n(1).Reserve seat ";
    cout << "\n(2).new air line ";
    cout << "\n(3).Exit ";
    cout << "\n you choise : ";
    cin >> input;
    return input;
}
void manu_top()
{
    system("cls");
    cout << "       ******************************************* " << endl;
    cout << "                  flight seat management           " << endl;
    cout << "       ******************************************* " << endl;
    cout << "\n\n\n";
}

int internal_manu()
{
    int input;
    cout << "\n(1).First class ";
    cout << "\n(2).Bussiness class ";
    cout << "\n(3).Economy class ";
    cout << "\n(4).Exit ";
    cout << "\nyou choise : ";
    cin >> input;
    return input;
}