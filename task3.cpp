#include <iostream>
#include <cmath>
using namespace std;
main()
{
    int array[5];
    cout << "Enter value for 1st element " << endl;
    cin >> array[0];
    cout << "Enter value for 2nd element " << endl;
    cin >> array[1];
    cout << "Enter value for 3rd element " << endl;
    cin >> array[2];
    cout << "Enter value for 4th element " << endl;
    cin >> array[3];
    cout << "Enter value for 5th element " << endl;
    cin >> array[4];
    cout << "1st  element at location [0]= " << array[0] << endl;
    cout << "last  element at location [4]= " << array[4] << endl;
    return 0;
}