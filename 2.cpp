#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

bool GetWinner(char symbol);
bool CheckRows(char symbol);
bool CheckColumns(char symbol);
bool CheckDiagonals(char symbol);

char array[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

int main()
{
    int i = 1, count = 0, cool = 0;
    char symbol, value, taken;

    while (true)
    {
        for (int z = 0; z < 3; z++)
        {
            for (int x = 0; x < 3; x++)
            {
                if (taken == array[z][x])
                {
                    array[z][x] = symbol;
                }
            }
        }
        if (count > 3)
        {
            char sym = 'X';
            // check who wins.
            for (int y = 0; y < 2; y++)
            {
                int x;
                int player = GetWinner(sym);
                if (player == 1)
                {
                    char opt;
                    if (sym == 'X')
                    {
                        x = 1;
                    }
                    if (sym == 'O')
                    {
                        x = 2;
                    }
                    cout << "                         ---------Congratulation-------------" << endl;
                    cout << "                            Player " << x << " Wins...";
                    cout << "                 \n\n";
                    cout << "              Play Again (y/n) : ";
                    cin >> opt;
                    if (opt == 'y')
                    {
                        cool = 1;
                    }
                    if (opt == 'n')
                    {
                        exit(0);
                    }
                }
                sym = 'O';
            }
            if (cool == 1)
            {
                int i=0;
                char line[9]={'1','2','3','4','5','6','7','8','9'};
                for (int z = 0; z < 3; z++)
                {
                    for (int x = 0; x < 3; x++)
                    {
                            array[z][x] = line[i];
                            i++;
                    }
                }
                i = 1, count = 0, cool = 0;
            }
        }
        system("cls");
        cout << "                  ----------------------------------------------------------------------" << endl;
        cout << "                  ----------------------       Tic Tak Toe       -----------------------" << endl;
        cout << "                  ----------------------------------------------------------------------" << endl;
        cout << "                  " << endl
             << endl;
             system("cls");
        cout << "                                 _____________________" << endl;
        cout << "                                |  " << array[0][0] << "   |  " << array[0][1] << "   |  " << array[0][2] << "   | " << endl;
        cout << "                                |______|______|______|" << endl;
        cout << "                                |  " << array[1][0] << "   |  " << array[1][1] << "   |  " << array[1][2] << "   | " << endl;
        cout << "                                |______|______|______| " << endl;
        cout << "                                |  " << array[2][0] << "   |  " << array[2][1] << "   |  " << array[2][2] << "   | " << endl;
        cout << "                                |______|______|______|" << endl;
        if (count % 2 == 0)
        {
            i = 1;
            symbol = 'X';
        }
        if (count % 2 != 0)
        {
            symbol = 'O';
        }
        while (true)
        {
            cout << "                   player " << i << "[" << symbol << "]"
                 << " Turn: ";
            cin >> value;
            int cont = 0;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (value == array[i][j])
                    {
                        cont = 1;
                        taken = array[i][j];
                        break;
                    }
                }
                if (cont == 1)
                {
                    break;
                }
            }
            if (cont == 0)
            {
                cout << "                           Already Taken  :) ";
                cout << "                       Press Any Key: ";
                getch();
            }
            if (value != '1' && value != '2' && value != '3' && value != '4' && value != '5' && value != '6' && value != '7' && value != '8' && value != '9')
            {
                cout << "                           InCorrect Input!!!  TRY AGAIN  :) " << endl
                     << endl;
                cout << "                       Press Any Key: ";
                getch();
            }
            else
            {
                break;
            }
        }
        count++;
        i++;
    }
}
bool GetWinner(char symbol)
{
    if (CheckRows(symbol) || CheckColumns(symbol) || CheckDiagonals(symbol))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool CheckRows(char symbol)
{
    int count = 0;
    for (int row = 0; row < 3; row++)
    {
        count = 0;
        for (int col = 0; col < 3; col++)
        {
            if (array[row][col] == symbol)
            {
                count = count + 1;
            }
        }
        if (count == 3)
        {
            return 1;
        }
    }
    return 0;
}
bool CheckColumns(char symbol)
{
    int count = 0;
    for (int col = 0; col < 3; col++)
    {
        count = 0;
        for (int row = 0; row < 3; row++)
        {
            if (array[row][col] == symbol)
            {
                count = count + 1;
            }
        }
        if (count == 3)
        {
            return 1;
        }
    }
    return 0;
}
bool CheckDiagonals(char symbol)
{
    int count = 0;
    for (int idx = 0; idx < 3; idx++)
    {
        if (array[idx][idx] == symbol)
        {
            count++;
        }
    }
    if (count == 3)
    {
        return 1;
    }
    count = 0;
    for (int row = 0, col = 2; row < 3; row++, col--)
    {
        if (array[row][col] == symbol)
        {
            count++;
        }
    }
    if (count == 3)
    {
        return 1;
    }
    return 0;
}