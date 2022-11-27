#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    string word;
    cout << "Enter String: ";
    cin >> word;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
        {
            a++;
        }
    }
    cout << "Number of vowels are: " << a;
}