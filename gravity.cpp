#include <iostream>
#include <conio.h>
#include <conio.h>
using namespace std;
char grid[5][5] = {
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}};
void output()
{
    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            cout << grid[x][y] << "     ";
        }
        cout << endl;
    }
}
void Run(int x)
{
    int z = 0;
    while (z != x)
    {
        for (int x = 4; x > 0; x--)
        {
            for (int y = 0; y < 5; y++)
            {
                if (grid[x][y] == '-')
                {
                    swap(grid[x][y], grid[x - 1][y]);
                }
            }
        }
        z++;
    }
    output();
}
main()
{
    int check, time;
    do
    {
        system("cls");
        output();
        cout << endl
             << endl;
        cout << "Enter 1 to start OR 0 TO EXIT..";
        cin >> check;
        cout << "Enter time :";
        cin >> time;
        if (check == 1)
        {
            Run(time);
        }
        else if (check == 0)
        {
            break;
        }
        else
        {
            cout << " __________________Invalid Input__________________" << endl;
            cout << " \\\\________________   Try Again   __________________//";
            getch();
        }
    } while (check != 1);
}