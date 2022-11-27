#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
#include <sstream>
using namespace std;
void Play(int grid[4][5]);
int Right_Stairs(int grid[4][5], int idx, int rows);
int Left_Stairs(int grid[4][5], int idx, int rows);
int main()
{
    int grid[4][5] = {
        {1, 0, 0, 2, 0},
        {0, 0, 0, 1, 0},
        {0, 1, 0, 0, 0},
        {0, 0, 0, 0, 0}};
    Play(grid);
    return 0;
}
void Play(int grid[4][5])
{
    int idx = 0,count = 0;
    for (int i = 0; i < 5; i++)
    {
        if (grid[0][i] == 2)
        {
            idx = i;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        idx = Right_Stairs(grid, idx, i);
    }
    for (int i = idx; i < 5; i++)
    {
        count++;
    }
    count--;
    if (count!=0)
    {
        cout<<"Move Right By : "<<count<<endl;
    }
    else
    cout<<"Stay Here"<<endl<<endl;
    cout<<"Park Here  >>>  :)";
    
}
int Right_Stairs(int grid[4][5], int idx, int rows)
{
    int count = 0, stair_idx = 0;
    for (int i = idx; i < 5; i++)
    {
        count++;
        if (grid[rows][i] == 1)
        {
            count--;
            stair_idx = i;
            break;
        }
        if (i == 4)
        {
            count = 0;
        }
    }
    if (count != 0)
    {
        cout << "Move Right By: " << count << endl;
        return stair_idx;
    }
    else
    {
        Left_Stairs(grid, idx, rows);
    }
}
int Left_Stairs(int grid[4][5], int idx, int rows)
{
    int count = 0, stair_idx = 0;
    for (int i = idx; i >= 0; i--)
    {
        count++;
        if (grid[rows][i] == 1)
        {
            stair_idx = i;
            count--;
            break;
        }
        if (i == 0)
        {
            count = 0;
        }
    }
    if (count != 0)
    {
        cout << "Move Left By: " << count << endl;
        return stair_idx;
    }
    else
    {
        cout << "No Stairs Found....";
        exit(0);
    }
}