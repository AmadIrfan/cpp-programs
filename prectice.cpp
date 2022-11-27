// #include <fstream>
#include <iostream>
using namespace std;
int arr[3][3] =
    {{1, 2, 3},
     {2, 3, 1},
     {3, 2, 4}};
bool returner(int colID, int rowID);
int main()
{
    return 0;
    bool result = returner(0, 0);
    cout << result;
}
bool returner(int colID, int rowID)
{

    if (arr[rowID] == arr[0][colID] && arr[rowID][i + 1] == arr[j + 1][colID] && arr[rowID][i + 2] == arr[j + 2][colID])
    {
        return true;
        break;
    }
}