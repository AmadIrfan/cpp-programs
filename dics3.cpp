#include<iostream>
using namespace std;
int main()
{
int amu, tot,dic;
string day,month;
cout<<"Enter  total purchase amount..";
cin>>amu;
cout<<"Enter the Day..";
cin>>day;
cout<<"Enter the Month..";
cin>>month;
if(((month=="march" || month=="october") || month== "August" )&& day=="sunday") {
dic=0.1*amu;
}
if((month =="november" || month=="december") && day=="monday") {
dic=(5/100.0)*amu;

}
tot=amu-dic;
cout<<"total bill.."<<amu<<endl;
cout<<"total payable bill.."<<tot;

}
