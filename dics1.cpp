#include<iostream>
using namespace std;
int main()
{
int amu, tot,dic;
string day;
cout<<"Enter  total purchase amount..";
cin>>amu;
cout<<"Enter the Day..";
cin>>day;
if(amu>5000 && day=="sunday") {
dic=0.1*amu;
tot=amu-dic;
}
if(amu<=5000 && day!="sunday") {
dic=(5/100.0)*amu;
tot=amu-dic;
}
cout<<"total bill.."<<amu<<endl;
cout<<"total payable bill.."<<tot;

}