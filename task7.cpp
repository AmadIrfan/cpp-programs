#include <iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter String: ";
    cin>> name;
    for (int i = 0; name[i] !='\0' ; i++)
    {
        name[i]=name[i]+1;
        cout<<name[i];
    }

    
}