#include <iostream>
#include <fstream>
#include <conio.h>
#include <cmath>
using namespace std;
struct rol{
    string name; 
    string pass;
    string 
    string Roles;
};
rol a1[2];
void storData();
int main()
{
//role a1;
int ii=0;
cout<<"Enter your name ";
cin>>a1[ii].name;
cout<<"Enter your PAss ";
cin>>a1[ii].pass;
cout<<"Enter your Role ";
cin>>a1[ii].Roles;
ii++;
storData();
return 0;
}
void storData(){
    fstream file;
    file.open("structdata.txt",ios::app);
    for(int i=0;i<1;i++)
    {
file << a1[1].name;
    }
    file.close();
}