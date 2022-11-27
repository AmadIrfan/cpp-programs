// Yasir Hassan...

#include <iostream>
using namespace std;
void specialnumber(int a);
int main()
{
    int a;
    cout << "Enter The Number:- ";
    cin >> a;
    specialnumber(a);
}
void specialnumber(int a)
{
    for (int i = 1111; i < 9999; i++)
    {
        int x = i % 10;
        int y = i / 10;
        int z = y % 10;
        int p = y / 10;
        int q = p % 10;
        int r = p / 10;
        int s = r % 10;
        if (x == 0 || z == 0 || q == 0 || s == 0)
        {
            continue;
        }
        if (a % x == 0 || a % z == 0 || a % q == 0 || a % s == 0)
        {
            cout << i << " Is A Special Number.";
            cout << "\n";
        }
    }
}

// Yasir Hassan...