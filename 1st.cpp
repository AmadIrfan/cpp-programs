#include <iostream>
#include<fstream>
#include<conio.h>

using namespace std;
int main()
{
    int num[10] = {12, 34, 32, 56, 23, 12, 33, 11, 33, 24};
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (num[i] < num[j])
            {
                int temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
       cout << num[i]<<" ";
    }
  }
