#include <iostream>
using namespace std;
int height_checker();
int size=10;
int roll_no[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int per_a[] = {75, 86, 93, 94, 83, 100, 95, 66, 57, 98};
int main()
{
    cout << height_checker() << " roll no get maximum marks";
    return 0;
}
int height_checker()
{
    int index = 0, max = 0;
    for (int i = 0; i <size; i++)
    {
        if (per_a[i] > max)
        {
            max = per_a[i];
            index = roll_no[i];
        }
    }
    return index;
}