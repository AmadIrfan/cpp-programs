#include <iostream>
#include <cmath>
using namespace std;
main()
{
    char alpha[100];
    cout << "Enter a name ";
    cin >> alpha;
    for (int i = 0; alpha[i] != '\0'; i++)
    {
        cout << alpha[i] << endl;
    }

    return 0;
}