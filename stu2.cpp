#include <fstream>
#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
void parking(int num[3][5]);
int main()
{
    int cars[3][5] = {{1, 0, 0, 0, 2},
                      {0, 0, 0, 0, 1},
                      {0, 0, 0, 0, 0}};
    parking(cars);
}
void parking(int Ar[3][5])
{
    int idx=0,count=0,check=0,position;
    for (int i = 0; i < 5; i++)
    {
        if (Ar[0][i]==2)
        {
            idx=i;
        }
    }
    for (int i = idx; i < 5; i++)
    {
        count++;
        if (Ar[0][i]==1)
        {
            check=1;
            position=0;
            break;
        }
    }
    if (check!=1)
    {
        count=0;
    }
    if (check!=1)
    {
        for (int i = idx; i >=0; i--)
        {
            count++;
            if (Ar[0][i]==1)
            {
                check=1;
                position=1;
                break;
            }
        }
        if (check!=1)
        {
            count=0;
        }
    }
    count--;
    if (check==1 && position==0)
    {
        cout<<"Right :"<<count;
    }
    else if (check==1 && position==1)
    {
        cout<<"Left :"<<count;
    }
    else
    {
        cout<<"No Stairs Found";
    }

    
    
    
    
    
}